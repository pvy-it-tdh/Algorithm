#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int dem=0;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                ++dem;
            }
        }
        if(a[i]==a[i-1])
        {
            dem=0;
        }
        else
        {
            cout << a[i] << ' ' << dem << endl;
            dem = 0;
        }
    }
    return 0;
}