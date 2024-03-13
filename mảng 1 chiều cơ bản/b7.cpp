#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a= new int [n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        bool check=true;
        for (int j=0;j<i;j++)
        {
            if(a[j]==a[i])
            {
                check=false;
            }
        }
        if(check)
        {
            cout << a[i]<< ' ';
        }
    }
    delete[] a;
    return 0;

}