#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter the age"<<endl;
    cin>>age;
    if(age<=18 )
    {
        cout<<"Child";
    }
    else if(age<=40)
    {
        cout<<"Young";
    }
    else 
    {
        cout<<"Adult";
    }
    return 0;
}