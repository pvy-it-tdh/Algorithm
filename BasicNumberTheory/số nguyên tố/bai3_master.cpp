#include <iostream>
#include <math.h>
using namespace std;
void sang(int l, int r)
{
    bool nt[r - l + 1];
    for (int i = 0; i <= r - l; i++)
    {
        nt[i] = true;
    }
    for (int i = 2; i <= sqrt(r); i++)
    {
        for (int j = max(i * i, (l + i - 1) * i / i); j <= r; j += i)
        {
            nt[j - l] = false;
        }
    }
    for (int i = max(2, l); i <= r; i++)
    {
        if (nt[i - l])
        {
            cout << i << ' ';
        }
    }
}
int main()
{
    int l, r;
    cin >> l >> r;
    sang(l, r);
    return 0;
}