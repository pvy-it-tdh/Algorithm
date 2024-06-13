#include <iostream>
#include <math.h>
using namespace std;
bool nt[10000001];
void sang()
{
    for (int i = 0; i < 10000001; i++)
    {
        nt[i] = true;
    }
    nt[0] = false;
    nt[1] = false;
    for (int i = 2; i <= sqrt(10000001); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 10000001; j += i)
            {
                nt[j] = false;
            }
        }
    }
}
bool ktra(int n)
{
    while (n > 0)
    {
        int a = n % 10;
        if (a != 2 && a != 5 && a != 7 && a != 3)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    int a, b;
    sang();
    while (t--)
    {
        cin >> a >> b;
        int dem = 0;
        for (int i = a; i <= b; i++)
        {
            if (nt[i] && ktra(i))
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}