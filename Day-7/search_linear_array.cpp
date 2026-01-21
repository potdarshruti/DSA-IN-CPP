#include<iostream>
#include<string>
using namespace std;
int main()
{
    int size,array[50],element,flag=0;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element in array : "<<endl;
    for (int i=0;i<size;i++){
        cout<<"\t"<<i+1<<" . ";
        cin>>array[i];
    }    
    cout<<"Enter the element to search : ";
    cin>>element;
    for(int i=0;i<size;i++){
        if(array[i]==element){
            cout<<"Element is present at location "<<i+1<<endl;
            flag=1;
        }    
    }
    if(flag==0){
        cout<<"\t Element is not present ";
    }

return 0;
}