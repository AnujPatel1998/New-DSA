// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    int n;
    cin>>n;
    if(n>=0){
        int ans=0,i=0,rem;
        int temp = n;
        while(temp!=0){
            rem = temp%2;
            ans = (rem*pow(10,i))+ans;
            temp = temp/2;
            i++;
        }
        cout<<ans;

    }
    else{
        const int bits = 32;
        bitset<bits> binary(n);
        cout<<binary;
    }
    return 0;
}




// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n,ans=0;
//     cin>>n;
//     while(n!=0){
//         int bit = n&1;
//         ans = (ans*10)+bit;
//         n = n>>1;
//     }
//     cout<<ans<<endl;

//     int n1;
//     cin>>n1;
//     float ans1=0;int i=0;
//     while(n1!=0){
//         int digit = n1&1;
//         ans1 = (digit*pow(10,i))+ans1;
//         n1=n1>>1;
//         i++;
//     }
//     cout<<ans1;
// }