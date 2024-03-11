#include<iostream>
using namespace std;
long sum(int a)
{
    if (a==1)
    {
        return  1;
    }
    return a+sum(a-1);
}
int main()
{
    int a;
    cin >> a;
    cout << sum(a);
    return 0;
}