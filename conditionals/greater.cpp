#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b :"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"a is Greater "<<a<<endl;
    }
    else{
        if(a<b)
        { 
        cout<<"b is Greater "<<b<<endl;
        }
        else{
            cout<<"a and b are equal "<<a<<"="<<b<<endl;
        }
    }
}