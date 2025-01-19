#include<iostream>
using namespace std;

bool isPossible(int arr[],int size,int student,int mid){
    int pageSum = 0;
    int studentCount = 1;
    for(int i = 0; i < size; i++){
        if(pageSum+arr[i] <= mid){
            pageSum +=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>student || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int BookAllocation(int arr[],int size,int student){
    int start=0,end=0;
    for(int i=0;i<size;i++){
        end = end+arr[i];
    }
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(isPossible(arr,size,student,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int student=2,size;
    int arr[] = {10,20,30,40};
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The minimum number of pages required is "<<BookAllocation(arr,size,student)<<endl;
}