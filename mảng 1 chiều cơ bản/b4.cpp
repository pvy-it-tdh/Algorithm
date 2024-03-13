#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    int *a=new int (n);
    int nho=0,lon=0;
    for (int i =0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> k;
    for(int i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            lon++;
        }
        else{
            nho++;
        }
    }
    cout << nho<< endl;
    cout << lon << endl;
}