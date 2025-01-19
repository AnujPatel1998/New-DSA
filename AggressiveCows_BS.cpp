#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool isPossible(int arr[],int k,int mid,int size){
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int AggressiveCows(int arr[],int size,int k){
    int start = 0;
    sort(arr,arr+size);
    int ans;
    int maxi = -1;
    for(int i=0;i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    int end = maxi;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(isPossible(arr,k,mid,size)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid -1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int k;
    cout<<"Number of Aggressive cows: ";
    cin>>k;
    int arr[] = {4,2,1,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<AggressiveCows(arr,size,k);
}