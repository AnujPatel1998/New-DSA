#include<iostream>
using namespace std;
int FirstOcc(int arr[],int size,int key){
    int start = 0,end=size-1,startindex = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            startindex = mid;
            end = mid-1; // continue searching in leftmost
        }
        else if(arr[mid]>key){
            end = mid-1;
            
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return startindex;
}
int LastOcc(int arr[],int size,int key){
    int start = 0,end=size-1,endindex = -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            endindex = mid;
            start = mid+1; // continue searching in rightmost
        }
        else if(arr[mid]>key){
            end = mid-1; 
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return endindex;
}
int main(){
    int size,key;
    int arr[] = {1,2,3,3,3,3,3,3,3,3,3,3,3,3,5};
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the key to search: ";
    cin>>key;
    int FirstIndex = FirstOcc(arr,size,key);
    int LastIndex = LastOcc(arr,size,key);
    cout<<FirstIndex<<" "<<LastIndex;
}