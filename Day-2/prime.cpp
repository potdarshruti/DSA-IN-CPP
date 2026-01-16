#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,num;
    bool isprime=true;
    cout<<"Enter no";
    cin>>num;
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            isprime=false;
            break;
        }
        
    }

    if(isprime==true){
        cout<<"Prime";
    }
    else{
        cout<<"Non prime";
    }

return 0;
}