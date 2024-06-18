#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
/*
p:nguyên tố
(2^p)-1: nguyên tố
=>2^(p-1)*(2^p -1) hoàn hảo

*/

bool hh(ll n)
{
    ll sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
bool nt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
ll hh[10];
int count = 0;
void init()
{
    for (int p = 2; p <= 32; p++)
    {
        if (nt(p))
        {
            int temp = (in)pow(2, p) - 1;
            if (nt(temp))
            {
                hh[count] = 1ll * (int)pow(2, p - 1) * temp;
                ++count;
            }
        }
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
        for (int i = 0; i < cnt; i++)
        {
            if (n == hh[i])
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