#include<iostream>
using namespace std;
int main()
{
    /* logic : n/2(a+l)   e.g 100/2(1+100)
                               =50*101
                               =5050
                               */
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;
    int i=1,sum=0;
    
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout << "The Sum from 1 to "<<n<< " is : "<<sum<<endl;
}