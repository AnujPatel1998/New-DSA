#include<iostream>
using namespace std;
void reverse(int a[],int n){
    int start = 0,end = n-1;
    for(int i=0;i<n;i++){
        if(start<=end){
            int temp = a[start];
            a[start] = a[end];
            a[end] = temp;
            start++;
            end--;
        }
        else{
            break;
        }
    }
    cout<<endl<<"reversed array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<"Original array: ";
    for(int i=0;i<12;i++){
        cout<<a[i]<<" ";
    }
    reverse(a,12);
}