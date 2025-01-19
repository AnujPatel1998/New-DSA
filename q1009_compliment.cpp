#include<iostream>
using namespace std;
int main(){
    int n,mask=0;
    cin>>n;
    int m=n;
    if(n == 0){
        cout<<1;
    }
    else{
        while(m!=0){
            mask = (mask<<1)|1;
            m = m>>1;
        }
         n = (~n) & mask;
        cout<<n;
    }
}