#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,i=0;
    cin >> n;
    while(n!=0){
        int a = n%10;
        if(a == 1){
            sum = sum + pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout<<sum;
}