#include <iostream>
#include <math.h>
using namespace std;
bool nt[10001];
void sang()
{
    for (int i = 0; i <= 10001; i++)
    {
        nt[i] = true;
    }
    nt[0] = nt[1] = false;
    for (int i = 2; i <= sqrt(10001); i++)
    {
        for (int j = i * i; j <= 10001; j += i)
        {
            nt[j] = 0;
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
        int n;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (nt[i] && nt[n - i])
            {
                cout << i << " " << n - i << endl;
            }
        }
    }
    return 0;
}