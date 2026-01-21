#include<iostream>
#include<string>
using namespace std;
int reverse(int size, int array[50]){
    int start=0, end=size-1;
    while(start<end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main()
{
    int size,array[50];
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element in array : "<<endl;
    for (int i=0;i<size;i++){
        cout<<"\t"<<i+1<<" . ";
        cin>>array[i];
    }    
    cout<<"Elemnt before reverse: \n \t";
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }  
    cout<<"\nElemnt after reverse: \n \t";
    reverse(size,array);
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }  

return 0;
}