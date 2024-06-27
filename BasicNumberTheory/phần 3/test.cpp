#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;

double f(ll x)
{
    return (2.0 / pow(x, 3)) + log((x + 3.0) / (x - 3.0));
}

double dk(ll x)
{
    if (x != 3)
    {
        return (double)((x + 3.0) / (x - 3.0));
    }
    else
    {
        return -1.0;
    }
}

int main()
{
    int s = 0;
    for (int i = -100000; i < 2100; i++)
    {
        if (dk(i - 2024) >= 0 && dk(6 * i - 27) > 0)
        {
            if (f(i - 2024) + f(6 * i - 27) >= 0)
            {
                s += 1;
            }
        }
    }
    cout << s << endl;

    return 0;
}
