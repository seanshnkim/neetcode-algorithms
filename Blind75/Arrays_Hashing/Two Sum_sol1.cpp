#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> indices;

        for (int i = 0; i < n; i++) {
            indices[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (indices.count(diff) && indices[diff] != i) {
            /* or it can be indices.find(diff) != indices.end()
               instead of indices.count(diff) */
                return {i, indices[diff]};
            }
        }
    }
};

int main() {
    return 0;
}