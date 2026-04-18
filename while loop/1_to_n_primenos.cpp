#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;
    int i=2;
    cout<<"Check whether the no is prime or not : "<<endl;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime no"<<endl;
            break;
        }
        else{
            cout<<n<<" is prime no."<<endl;
        }
        i++;
    }
    
}