#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character:-"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<ch<<" is lowercase  lies between a and z"<<endl;
    }
    else{
        if(ch>='A' && ch<='Z')
        { 
        cout<<ch<<" is Uppercase  lies between A and Z"<<endl;
        }
        else{
           if(ch>='0' && ch<='9')
           {
            cout<<ch<<" is Numeric lies between 0 and 9"<<endl;
           }
           else{
            cout<<ch<<" is Special Symbol  "<<endl;
           }
        }
    } 
}