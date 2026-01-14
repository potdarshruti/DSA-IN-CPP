#include<iostream>
#include<string>
using namespace std;
int sum(int array[50],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum=sum+array[i];
    }    
    return sum;
}
int product(int array[50],int size){
    int product=1;
    for (int i=0;i<size;i++){
        product=product*array[i];
    }    
    return product;
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
    cout<<"Sum of array is "<<sum(array,size)<<endl; 
    cout<<"Product of array is "<<product(array,size)<<endl;   
return 0;
}