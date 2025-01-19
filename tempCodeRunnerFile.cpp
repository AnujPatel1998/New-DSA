#include<bits/stdc++.h>
using namespace std;

void PairSum(vector<int> arr,int n){
    vector<vector <int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == n){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}

int main(){
    int n = 5;
    vector<int> arr = {1,2,3,4,5};
    PairSum(arr,n);
}