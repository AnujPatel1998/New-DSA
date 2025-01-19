#include<iostream>
using namespace std;

int PeakElement(int arr[],int size){
    int start = 0,end = size-1,mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[start];
}

int main(){
    int size;
    int arr[] = {1,2,3,4,3,2,1};
    size = sizeof(arr)/sizeof(arr[0]);
    int Element = PeakElement(arr,size);
    cout<<Element;
}