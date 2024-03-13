#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a=new int (n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int min=a[0];
    // tìm min
    for (int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    int dem=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            dem++;
        }
    }
    cout << dem;
}