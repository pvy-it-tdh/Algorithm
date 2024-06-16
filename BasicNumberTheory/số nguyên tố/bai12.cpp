#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
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
int main()
{
    int t;
    cin >> t;
    sang();
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        int c1 = sqrt(l);
        int c2 = sqrt(r);
        int count = 0;
        for (int i = c1; i <= c2; i++)
        {
            if (nt[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}