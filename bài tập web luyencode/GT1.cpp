#include<iostream>
using namespace std;
long giaithua(int n)
{
    if(n==1 ||n==0)
    {
        return 1;
    }
    return n*giaithua(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << giaithua(n);
}
