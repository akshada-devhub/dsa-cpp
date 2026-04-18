#include<iostream>
using namespace std;
int main()
{
    int n,isprime;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
       if(n%i==0)
       {
        cout<<"not prime"<<endl;
        isprime=0;
       }
    }
    if(isprime!=0)
    {
       cout<<"The no is prime "<<n<<endl;
    }
    
}
