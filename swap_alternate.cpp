#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int size){
    for(int i=0,j=i+1;i<size-1,j<size;i+=2,j+=2){
        swap(arr[i],arr[j]);
    }
}
void SwapAlternate1(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int size = 6;
    int arr[100] = {1,2,7,8,5,6};
    SwapAlternate(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    SwapAlternate1(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}