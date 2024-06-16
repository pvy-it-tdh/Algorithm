#include <iostream>
using namespace std;
int degree(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += n / i;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        cout << degree(n, p) << endl;
    }
    return 0;
}