#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
ll fibo[100];
void init()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        ll n;
        cin >> n;
        bool ok = false;
        for (int i = 0; i <= 92; i++)
        {
            if (n == fibo[i])
            {
                ok = true;
                break;
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}