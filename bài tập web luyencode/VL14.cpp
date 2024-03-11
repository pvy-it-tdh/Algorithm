#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a>> b;
    while(b!=0)

    {
        a=abs(a);
        b=abs(b);
        int temp=a%b;
        a=b;
        b=temp;
    }
    cout << a;
}