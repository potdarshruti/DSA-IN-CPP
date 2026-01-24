#include<iostream>
#include<string>
#include<climits>
using namespace std;
int swaping(int array[50], int size){
    int smallest= INT_MIN;
    for (int i=0;i<size;i++){
        smallest=min(array[i],smallest);
    } 
    int largest= INT_MAX;
    for (int i=0;i<size;i++){
        largest=max(array[i],largest);
    } 
    swap(smallest,largest);
         
    
}
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
    cout<<"array after swapping : "<<endl; 
    swaping(array, size);
    for (int i=0;i<size;i++){
        cout<<array[i];
    } 




    return 0;
}  