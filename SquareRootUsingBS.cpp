#include<iostream>
using namespace std;
int SquareRoot(int n){
    int start = 0,end = n,ans=0,mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid>n){
            end = mid-1;
        }
        else if(mid*mid<n){
            start = mid+1;
            ans = mid;
        }
        else if(mid*mid == n){
            return mid;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

double MorePrecision(int n,int precision,int tempSol){
    double ans =tempSol;
    double factor = 1;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j = ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int tempSol = SquareRoot(n);
    cout<<tempSol<<endl;
    cout<< MorePrecision(n,3,tempSol);
}