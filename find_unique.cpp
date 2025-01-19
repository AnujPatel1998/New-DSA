#include<iostream>
using namespace std;
void FindUnique(int arr[],int size){
    int UniqueNum;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(i+1<size){
            UniqueNum = arr[i]^arr[i+1];
        }
    }
    cout<<"Unique number is: "<<UniqueNum;
}
int main(){
    int n,size,arr[100]={0};
    cout<<"No. of operations: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Operation "<<i+1<<endl;
        cout<<"Enter the size(odd) of the array: ";
        cin>>size;
        FindUnique(arr,size);
        arr[100]={0};
    }    
}