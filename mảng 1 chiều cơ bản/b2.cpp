#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
bool ktra(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int *a =new int[n];
    int dem=0;
    int sum=0;
    float tb;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(ktra(a[i]))
        {
            sum+=a[i];
            dem++;
        }
    }
    tb=(float)sum/dem;
    cout << setprecision(3)<<fixed<< tb;
    delete [] a; 
}