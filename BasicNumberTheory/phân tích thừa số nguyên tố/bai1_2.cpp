#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void pt(int n)
{
    vector<int> factor;
    while (n % 2 == 0)
    {
        if (factor.empty() || factor.back() != 2)
        {
            factor.push_back(2);
        }
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            if (factor.empty() || factor.back() != i)
            {
                factor.push_back(i);
            }
            n /= i;
        }
    }
    if (n > 2)
    {
        if (factor.empty() || factor.back() != n)
        {
            factor.push_back(n);
        }
    }
    for (int i = 0; i < factor.size(); i++)
    {
        cout << factor[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    pt(n);
    return 0;
}