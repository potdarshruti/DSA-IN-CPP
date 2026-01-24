#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[7]={3,-4,5,4,-1,7,-8};
    int max_sum=INT_MIN;
    int n=7;
    for (int start=0; start <n;start++){
        int current_sum=0;
        for (int end=start ; end <n; end++){
           
                current_sum+=arr[end];
                max_sum=max(current_sum,max_sum);  
            
        }
    }
    cout<<max_sum;

    return 0;
}