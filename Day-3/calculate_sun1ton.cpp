#include<iostream>
#include<string>
using namespace std;
int sum(int a){
    int sum=0;
    for(int i=1; i<=a; i++ ){
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int a;
    cout<<"enter range";
    cin>>a;
    cout<<"sum is "<<sum(a);

return 0;
}