#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    inter.push_back(nums1[i]);
                    nums2[j] = -1;
                }
            }
        }
        vector<int> result(inter.begin(), inter.end());
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersection(nums1, nums2);
    cout << "Intersection: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
