#include<iostream>
#include<string>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character : ";
    cin>>c;
    if(c>='A'&& c<='Z'){
        cout<<"uppercase";
    }
    else{
        cout<<"lowercase";
    }
return 0;
}