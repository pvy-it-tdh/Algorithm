#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin >> a;
    double sum=1;
    for (int i=1 ;i<=a;i++)
    {
        sum*=a;
    }
    cout << sum;
    return 0;
    
}
