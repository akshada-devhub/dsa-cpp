#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int a=0,b=1,c; 
    cout<<"Fibonacci series is given below : "<<endl;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++)
    {
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
    }
}
