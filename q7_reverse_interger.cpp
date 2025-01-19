#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    while(n!=0){
        int a = n%10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && a > 7)) {
                return 0; // Overflow
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && a < -8)) {
                return 0; // Underflow
            }
        ans = (ans*10)+a;
        n = n/10;
    }
    cout<<ans;
}