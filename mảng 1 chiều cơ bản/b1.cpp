#include<iostream>
using namespace std;
int main()
{
    int chan=0,le=0,sumchan=0,sumle=0;
    int n;
    cin >> n;
    int *a =new int (n);
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            chan++;
            sumchan+=a[i];
        }
        else{
            le++;
            sumle+=a[i];
        }
    }
    cout << chan << endl;
    cout << le << endl;
    cout << sumchan << endl;
    cout << sumle << endl;

}