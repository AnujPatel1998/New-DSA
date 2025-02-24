#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6}; //even
    int brr[] = {1,2,3,4,5,6,7}; //odd
    cout<<BinarySearch(arr,6,5)<<endl;
    cout<<BinarySearch(arr,6,7)<<endl;
    cout<<BinarySearch(brr,7,7)<<endl;
    cout<<BinarySearch(brr,7,8)<<endl;
}