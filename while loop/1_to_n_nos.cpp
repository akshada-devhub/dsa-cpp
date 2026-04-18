#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:- "<<endl;
    cin>>n;
    int i=1;
    cout<<"The numbers from 1 to "<<n<<" is given below"<<endl;
    while(i<=n)
    {
        cout<<i<<"  ";
        i++;
    }
}