/*
Given a positive integer n, write a function that returns the number of 
set bits
 in its binary representation (also known as the Hamming weight).

 

Example 1:

Input: n = 11

Output: 3

Explanation:

The input binary string 1011 has a total of three set bits.
*/

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}