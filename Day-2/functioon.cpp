#include<iostream>
using namespace std;
int sum( int a, int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
   cout<<"Enter the number 1"<<endl;
   cin>>a;
   cout<<"Enter the number 2"<<endl;
   cin>>b;
   cout<< "Sum is " <<sum(a,b)<<endl;
   return 0;
}