#include <iostream>
#include <math.h>
using namespace std;
bool nt[10000001];
void sang()
{
    for (int i = 0; i <= 10000001; i++)
    {
        nt[i] = true;
    }
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 10000001; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
bool ktra(int n)
{
    while (n > 0)
    {
        int a = n % 10;
        if (a != 2 && a != 3 && a != 5 && a != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int tong(int n)
{
    int result = 0;
    while (n != 0)
    {
        int a = n % 10;
        result += a;
        n /= 10;
    }
    return result;
}
int main()
{
    int t;
    cin >> t;
    int a, b;
    sang();
    while (t--)
    {
        int dem = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (nt[i] && ktra(i) && nt[tong(i)])
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
}