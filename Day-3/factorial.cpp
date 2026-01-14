#include<iostream>
#include<string>
using namespace std;
int fact(int a){
    int fact =1;
    if(a==0){
        cout<<"factorial is 1";
    }
    else
    {
        for(int i=1; i<=a; i++ ){
            fact=fact*i;
        }
        cout <<"factorial is "<<fact;
    }
}
int main()
{
    int a;
    cout<<"Enter number : ";
    cin>>a;
    fact(a);

return 0;
}