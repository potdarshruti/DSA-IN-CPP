#include<iostream>
#include<string>
using namespace std;
int digit_sum(int a){
    
    cout<<"Enter number : ";
    cin>>a;
    int lastdigit;
    int sum=0;
    while(a>0){
        lastdigit=a%10;
        a=a/10;
        sum=sum+lastdigit;   
    }
    cout<<sum;
}
int main()
{
    int a;
    sum(a);

return 0;
}