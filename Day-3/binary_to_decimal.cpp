#include<iostream>
#include<string>
using namespace std;
int bin_to_deci(int num)
{
    int pow=1,ans=0;
    while(num>0){
        int remain=num%10;
        ans+=remain*pow;
        num/=10;
        pow=2*pow;
        
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Decimal Conversion is "<<bin_to_deci(num);
    return 0;
    }