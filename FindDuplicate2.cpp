#include<iostream>
#include<vector>
using namespace std;
void FindDuplicate(int arr[],int size){
    int brr[100] = {0};
    for(int i=0;i<size;i++){
        brr[arr[i]]++;
    }
    for(int i=0;i<size;i++){
        if(brr[i]>1){
            cout<<i<<" ";
        }
    }   
}
int main(){
    int size=8;
    int arr[100] = {4,3,2,8,2,3,1,1};
    FindDuplicate(arr,size);
}