#include<iostream>
using namespace std;

int PivotElement(int arr[],int size){
    int start = 0,end = size-1,mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
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
    int arr[] = {3,8,10,17,1};
    size = sizeof(arr)/sizeof(arr[0]);
    int Element = PivotElement(arr,size);
    cout<<Element;
}