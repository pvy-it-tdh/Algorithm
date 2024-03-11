<<<<<<< HEAD
#include<iostream>
using namespace std;
long C(int k,int n)
{
if(k == n || k == 0)
    return 1;
return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    long n,k;
    cin >> n >> k;
    cout <<C(k,n);
    return 0;
=======
#include<iostream>
using namespace std;
long C(int k,int n)
{
if(k == n || k == 0)
    return 1;
return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    long n,k;
    cin >> n >> k;
    cout <<C(k,n);
    return 0;
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
}