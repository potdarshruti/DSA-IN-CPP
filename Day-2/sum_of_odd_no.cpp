#include<iostream>
#include<string>
using namespace std;
int main()
{

 int i,range,sum=0;
    cout<<"Enter the range";
    cin>>range;
    for(i=0;i<=range;i++){
        if(i%2==1){
            sum=sum+i;
        }
    }
    cout<<sum;
return 0;
}