#include<iostream>
#include<string>
using namespace std;
int main()
{
    int marks[50];
    int i ,no;
    cout<<"Enter the no of stuent : ";
    cin>>no;
    for (i=0;i<no;i++){
        cout<<"Enter the mark of roll no "<<i+1<<" : ";
        cin>>marks[i];

    }
    cout<<"Marks are as follows : "<<endl;
    for (i=0;i<no;i++){
        cout<<"Roll no "<<i+1<<" : "<<marks[i]<<endl;

    }


return 0;
}