#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter range";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
    cout<<endl;    
    }
return 0;
}