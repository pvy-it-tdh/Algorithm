<<<<<<< HEAD
#include<iostream>
using namespace std;
int tong(int n)
{
    if (n==2 || n==1 || n==0)
    {
        return 2;
    }
    return n+tong(n-1);

}
int main()
{
    int n; cin >>n;
    cout << tong(n)+2*n;
    return 0;
=======
#include<iostream>
using namespace std;
int tong(int n)
{
    if (n==2 || n==1 || n==0)
    {
        return 2;
    }
    return n+tong(n-1);

}
int main()
{
    int n; cin >>n;
    cout << tong(n)+2*n;
    return 0;
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
}