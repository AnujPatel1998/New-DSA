#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0, leftSum = 0;

    // Calculate the total sum of the array
    for (int num : nums) {
        totalSum += num;
    }

    // Iterate through the array and check for the pivot index
    for (int i = 0; i < nums.size(); ++i) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i; // Pivot index found
        }
        leftSum += nums[i];
    }

    return -1; // No pivot index exists
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index: " << pivotIndex(nums) << endl;
    return 0;
}
