#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool nt[10000001];
void sang()
{
    for (int i = 0; i <= 10000001; i++)
    {
        nt[i] = 1;
    }
    nt[0] = 0;
    nt[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 10000001; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int n;
    sang();
    while (t--)
    {
        cin >> n;
        vector<pair<int, int>> prime;
        for (int p = 2; p <= n / 2; p++)
        {
            int q = n - p;
            if (nt[q] && nt[p])
            {
                prime.push_back(make_pair(p, q));
            }
        }
        for (auto pair : prime)
        {
            cout << pair.first << " " << pair.second << endl;
        }
    }
}