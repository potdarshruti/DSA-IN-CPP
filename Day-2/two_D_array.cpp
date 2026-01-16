#include<iostream>
using namespace std;
int main()
{
    int i,j,array[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<"Enter the array element at "<<i <<" , "<<j<<endl;
        cin>>array[i][j];
        }
    }
cout<<array[i];

    
    return 0;

}