#include<iostream>
using namespace std;
bool LinearSearch(int a[],int size,int key){
    for(int i=0;i<size;i++){
        if(a[i]==key){
            return true;
        }
    }
    return 0;
}  
int main(){
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int a[100] = {2,3,4,5,6,7,8,9,0,11,20};
    int found = LinearSearch(a,11,key);
    if(found){
        cout<<"key found in the array"<<endl;
    }
    else{
        cout<<"key not found in the array"<<endl;
    }
}