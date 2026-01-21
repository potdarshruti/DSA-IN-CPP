#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main()
{
    int size=10;
    int smallest=INT_MAX;
    int num[size]={34,21,28,11,34,39,4,67,23,54};
    for(int i=0;i<10;i++){
        smallest= min(num[i],smallest);
        // if(num[i]<smallest){
        //     smallest= num[i];
        // }
    }
    cout<<smallest;


return 0;
}