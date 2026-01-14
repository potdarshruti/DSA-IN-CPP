#include<iostream>
#include<string>
using namespace std;
int min_no(int a,int b){
    if(a<b){
        cout<<"A is minimum number";
    }
    else{
        cout<<" B is minimum number";
    }
}

int main()
{
    int a, b ;
    cout<<"Enter the value for A : ";
    cin>>a;
    cout<<"Enter the value for B : ";
    cin>>b;
    cout<<"A is "<<a<<" and B is "<<b<<endl;
    min_no(a,b);
return 0;
}
