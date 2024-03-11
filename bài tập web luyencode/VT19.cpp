#include<iostream>
using namespace std; 
int main()
{ 
    int a,b; 
    cin>>a>>b; 
    int dem =0; 
for(int i=b-1; i>a; i--)
{ 
    if(i%3==0)
    { 
        cout << i <<" "; 
    } 
else
    { 
        dem++; 
    }
} 
    if(dem==0)
        cout<<"NOT FOUND"; 
    return 0;
 }