#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = n;  
        for (int i = 0; i < n; i++) {
            xorr ^= i ^ nums[i];
        }
        return xorr;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3};
    int res = sol.missingNumber(nums1);
    return 0;
}