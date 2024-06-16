#include <iostream>
#include <math.h>
using namespace std;
bool nt[1001];
void sang()
{
    for (int i = 0; i <= 1001; i++)
    {
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(1001); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1001; j += i)
            {
                nt[j] = false;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    sang();
    int n;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i < sqrt(n) && nt[i])
            {
                cout << i * i << ' ';
            }
        }
        cout << endl;
    }
}