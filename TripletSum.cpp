#include<bits/stdc++.h>
using namespace std;

void TripletSum(vector<int> arr,int n){
    vector<vector <int>> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
            if(arr[i]+arr[j]+arr[k] == n){
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                ans.push_back(temp);
            }
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
    }
}

int main(){
    int n = 13;
    vector<int> arr = {1, 4, 45, 6, 10, 8, 3};
    TripletSum(arr,n);
}