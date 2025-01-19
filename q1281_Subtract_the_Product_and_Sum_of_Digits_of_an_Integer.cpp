/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 
Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,mul=1;
    while(n>0){
        sum = (n%10)+sum;
        mul = (n%10)*mul;
        n = n/10;
    }
    cout<<mul-sum<<endl;
}