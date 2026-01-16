#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=1,num,sum=0;
    cout<<"Enter Number:  ";
    cin>>num;
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=num);
    cout<<"Sum is "<<sum;

return 0;
}