#include <iostream>
using namespace std;
int pascal(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return pascal(n - 1, k) + pascal(n - 1, k - 1);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << pascal(i, j) << ' ';
        }
        cout << endl;
    }
}