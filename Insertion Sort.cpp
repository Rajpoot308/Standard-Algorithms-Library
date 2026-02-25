#include <bits/stdc++.h>
using namespace std;

// 1. 
// void implementInsertionSort(vector<int>& nums) {
//     int n = nums.size();
    
//     for(int i = 1; i < n; i++) {
        
//       for(int j = i; j > 0; j--) {
//           if(nums[j] < nums[j-1]) {
//               int target = nums[j];
//               nums[j] = nums[j-1];
//               nums[j-1] = target;
//           }
//           else {
//               break;
//           }
//       }

//     }
    
    
// }


// 2. Worst case TC O(n2), Best case TC O(n)

void implementInsertionSort(vector<int>& nums) {
    int n = nums.size();
    
    for(int i = 1; i < n; i++) {
        
        int j = i;
        while(j > 0 && nums[j] < nums[j-1]) {
            int target = nums[j];
            nums[j] = nums[j-1];
            nums[j-1] = target;
            j--;
        }
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

    implementInsertionSort(nums);

    for(int& num : nums) {
        cout << num << " ";
    }
    
    return 0;
}