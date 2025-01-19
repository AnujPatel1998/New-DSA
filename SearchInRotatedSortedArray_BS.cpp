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
    return start;
}

int SearchElement(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int arr[] = {3,8,10,17,1};
    int size,key = 2;
    size = sizeof(arr)/sizeof(arr[0]);
    int pivot = PivotElement(arr,size);
    int s,e;
    if(key>=arr[pivot] && key<=arr[size-1]){
        s = pivot;
        e = size-1;
    }
    else  {
        s = 0;
        e = pivot-1;
    }
    cout<<SearchElement(arr,s,e,key);
}