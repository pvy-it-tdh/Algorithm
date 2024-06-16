#include <iostream>
#include <math.h>
using namespace std;
int nt[100001];
void sang()
{
    for (int i = 0; i <= 100001; i++)
    {
        nt[i] = i;
    }
    for (int i = 2; i <= sqrt(100001); i++)
    {
        if (nt[i] == i)
        {
            for (int j = i * i; j <= 100001; j += i)
            {
                if (nt[j] == j)
                {
                    nt[j] = i;
                }
            }
        }
    }
}
int main()
{
    int t, n;
    cin >> t;
    sang();
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << nt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}