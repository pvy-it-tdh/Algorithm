#include <iostream>
#include <math.h>
using namespace std;
int p[100001];
void sang()
{
    for (int i = 0; i <= 100001; i++)
    {
        p[i] = i;
    }
    for (int i = 2; i <= sqrt(100000); i++)
    {
        if (p[i] == i)
        {
            for (int j = i * i; j <= 100001; j += i)
            {
                if (p[j] == j)
                {
                    p[j] = i;
                }
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
        int n;
        cin >> n;
        while (n != 1)
        {
            cout << p[n] << " ";
            n = n / p[n];
        }
        cout << endl;
    }
    return 0;
}