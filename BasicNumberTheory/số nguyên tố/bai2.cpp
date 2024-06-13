#include <iostream>
#include <math.h>
using namespace std;
bool nt[10000001];
void sang()
{
    for (int i = 0; i <= 10000001; i++)
    {
        nt[i] = true;
    }
    nt[0] = false;
    nt[1] = false;
    for (int i = 2; i <= sqrt(10000001); i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 10000001; j += i)
            {
                nt[j] = false;
            }
        }
    }
}
int main()
{
    sang();
    int n;
    cin >> n;
    if (nt[n])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}