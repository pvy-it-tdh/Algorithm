#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, int r;
        cin >> l >> r;
        int c1 = sqrt(l);
        int c2 = sqrt(r);
        if (c1 * c1 != l)
            ++c1;
        for (int i = c1; i <= c2; i++)
        {
            cout << i * i << " ";
        }
        cout << endl;
    }
    return 0;
}