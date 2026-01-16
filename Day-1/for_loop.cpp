#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the number"<< endl;
    cin>>n;
    cout<<"Table of "<<n<<" is"<<endl;

    for(int i=1; i<=10; i++)
    {
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }

    return 0;
}