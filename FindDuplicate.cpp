#include<iostream>
using namespace std;
int FindDuplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i]^i;
    }
    return ans;
}
int main(){
    int size=6;
    int arr[100] = {1,2,3,4,5,3};
    int ans = FindDuplicate(arr,size);
    cout<<"Duplicate is: "<<ans;
}