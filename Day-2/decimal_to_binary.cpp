#include<iostream>
#include<string>
using namespace std;
int deci_to_binary(int num)
{
    int ans=0, remain, i=1;
    while(num>0){
        remain=num%2;
        num=num/2;
        ans+=(remain*i);
        i=i*10;
        }
    return ans;
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Binary Conversion is "<<deci_to_binary(num);
    ;
    }