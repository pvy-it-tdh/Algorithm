<<<<<<< HEAD
#include<iostream>
#include<iomanip>
using namespace std;
double tong(float n)
{
    if(n==1|| n==0 ||n==2)
    {
        return 0.5;
    }
    return 1.0/n+tong(n-1);

}
int main()
{
    int n;
    cin >> n;
    cout << setprecision(4)<< fixed<< tong(n);
    return 0;
}
=======
#include<iostream>
#include<iomanip>
using namespace std;
double tong(float n)
{
    if(n==1|| n==0 ||n==2)
    {
        return 0.5;
    }
    return 1.0/n+tong(n-1);

}
int main()
{
    int n;
    cin >> n;
    cout << setprecision(4)<< fixed<< tong(n);
    return 0;
}
>>>>>>> cc1732c24406653d5a812a99b387e384aa416f95
