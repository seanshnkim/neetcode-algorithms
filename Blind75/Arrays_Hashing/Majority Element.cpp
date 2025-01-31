#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate;

        for (int& num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        return candidate;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,2,3,2,1,2};
    int ans = sol.majorityElement(nums);
    return 0;
}

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int ans = nums[0];
//         unordered_map<int, int> hashMap;

//         for (int k: nums) {
//             if (hashMap.find(k) == hashMap.end()) {
//                 hashMap[k] = 1;
//             }
//             else {
//                 hashMap[k] += 1;
//                 if (hashMap[k] > n/2) {
//                     ans = k;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
