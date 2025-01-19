#include<iostream>
using namespace std;
void Sort01(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(arr[start]==1 && arr[end] == 0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]==0 && arr[end]==0){
            start++;
        }
        else if(arr[start]==1 && arr[end]==1){
            end--;
        }
        else if(arr[start]==0 && arr[end]==1){
            start++;
            end--;
        }
    }
}
int main(){
    int arr[] = {1,1,0,0,0,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Sort01(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}