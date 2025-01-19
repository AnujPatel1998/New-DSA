#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (auto x : arr) {
            freq[x]++;
        }

        unordered_set<int> s;
        for (auto x : freq) {
            s.insert(x.second);
        }

        return freq.size() == s.size();
    }
};

int main() {
    Solution solution;
    vector<int> testArray = {1, 2, 2, 1, 1, 3};
    
    if (solution.uniqueOccurrences(testArray)) {
        cout << "The occurrences of each number are unique." << endl;
    } else {
        cout << "The occurrences of each number are not unique." << endl;
    }
    return 0;
}






// #include<iostream>
// using namespace std;
// bool FindUnique(int arr[],int size){
//     int UniqueNum=0;
//     for(int i=0;i<size;i++){
//         if(i+1<size){
//             UniqueNum = arr[i]^arr[i+1];
//         }
//     }
//     if(UniqueNum!=0){
//         return false;
//     }
//     else{
//         return true;
//     }

// }
// int main() {
//     int size=10;
//     int arr[100] = {-3,0,1,-3,1,1,1,-3,10,0};
//     int brr[100] = {0};
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(j == arr[i]){
//                 brr[j]++;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;
//     int res = FindUnique(brr,size);
//     cout<<res<<endl;
// }