#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
ll phi(ll n)
{
    ll res = n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res = res - res / i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        res = res - res / n;
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << phi(n);
    }
    return 0;
}