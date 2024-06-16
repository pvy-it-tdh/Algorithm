#include <iostream>
#include <math.h>
using namespace std;
bool t_prime(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
            {
                count++;
            }
        }
    }
    return count == 3;
}
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            if (t_prime(i))
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}