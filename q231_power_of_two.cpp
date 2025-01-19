#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i=0;
    string res;
    cin>>n;
    while(i<=30){
        if(n == pow(2,i)){
            res = "true";
            cout<<res;
            break;
        }
        else{
            i++;
        }
    }
    if(res!="true"){
        cout<<"false";
    }
}