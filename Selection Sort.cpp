#include <bits/stdc++.h>
using namespace std;

void implementSelectionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n-1; i++) {
        int mini = nums[i];
        int miniIndex = i;
        for(int j = i+1; j < n; j++) {
            if(mini > nums[j]) {
                mini = nums[j];
                miniIndex = j;
            }
        }

        int target = nums[i];
        nums[i] = mini;
        nums[miniIndex] = target;

    }
}

int main() {
    // Write C++ code here
    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    implementSelectionSort(nums);

    for(int& num : nums) {
        cout << num << " ";
    }
    
    return 0;
}