#include <vector>

using namespace std;

class Solution {
public:
    // This code doesn't work.
    // int removeElement(vector<int>& nums, int val) {
    //     for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
    //         if (*it == val) {
    //             nums.erase(it);
    //         }
    //     }
    //     return nums.size();
    // }
    
};

int main() {
    Solution sol;
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = sol.removeElement(nums, val);
    return 0;
}