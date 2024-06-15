#include <iostream>
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
    int n;
    cin >> n;
    sang();
    int dem = 0;

    for (int i = 2; i <= 10000001; i++)
    {
        if (nt[i])
        {
            cout << i << endl;
            dem++;
            if (dem == n)
            {
                break;
            }
        }
    }
}