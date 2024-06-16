#include <iostream>
#include <math.h>
using namespace std;
int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << prime(i) << " ";
        }
        cout << endl;
    }
    return 0;
}