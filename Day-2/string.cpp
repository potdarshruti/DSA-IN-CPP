#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cout<<"Enter the name :"<<endl;
    cin>>name;
    cout<<"The name is "<<name<<endl;
    cout<<"The lenth of name is "<<name.length()<<endl;
    cout<<"The Name from letter 0 to 3 is "<<name.substr(0,3)<<endl;
    return 0;
}