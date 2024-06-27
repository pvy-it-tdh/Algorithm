/*
================= NOTE============================
tổ hợp chập k của n = C k-1 của n-1 + C k của n-1
*/

#include <iostream>
using namespace std;
using ll = long long;
ll c[1001][1001];
void init()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
                c[i][j] %= 1000000007;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    init();
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << c[n][k] << endl;
    }
    return 0;
}