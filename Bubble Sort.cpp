#include <bits/stdc++.h>
using namespace std;

// 1. 
// void implementBubbleSort(vector<int>& nums) {
//     int n = nums.size();
    
//     for(int i = 0; i < n-1; i++) {
       
//       for(int j = 0; j < n-1-i; j++) {
//           if(nums[j] > nums[j+1]) {
//               int target = nums[j];
//               nums[j] = nums[j+1];
//               nums[j+1] = target;
//           }
//       }

//     }
    
    
// }


// 2. 

// void implementBubbleSort(vector<int>& nums) {
//     int n = nums.size();
    
//     for(int i = n-1; i > 0; i--) {
        
//         for(int j = 0; j < i ; j++) {
//             if(nums[j] > nums[j+1]) {
//                 int target = nums[j];
//                 nums[j] = nums[j+1];
//                 nums[j+1] = target;
//             }
//         }
//     }
// }

// 3. optimize 

void implementBubbleSort(vector<int>& nums) {
    int n = nums.size();
    
    for(int i = n-1; i > 0; i--) {
        
        bool flag = true;
        for(int j = 0; j < i; j++) {
            if(nums[j] > nums[j+1]) {
                int target = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = target;
                flag = false;
            }
        }
        
        if(flag) break;
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

    implementBubbleSort(nums);

    for(int& num : nums) {
        cout << num << " ";
    }
    
    return 0;
}