#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // HASH MAP
        unordered_map<int, int> hashMap;
        int i = 0, j = 1;

        for (int k=0; k < nums.size(); k++) {

            hashMap[nums[k]] = k;

        }
        for (int k=0; k < nums.size(); k++) {

            int diff = target - nums[k];

            i = k;

            // j = hashMap.find(diff)->second;
            if (hashMap.find(diff) != hashMap.end()) {

                j = hashMap.find(diff)->second;
                
                if (j != i) {
                    break;
                }
            }
        }
        return vector<int> {i, j};
    }
};

int main() {
    Solution sol;
    vector<int> test_input = {1,2,3,4};
    int target = 7;
    vector<int> res = sol.twoSum(test_input, target);
    return 0;
}

        // BRUTE FORCE
        // vector <int> res;
        // for (int i=0; i < nums.size(); i++) {
        //     for (int j=i+1; j < nums.size(); j++) {
        //         if (nums[i] + nums[j] == target) {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         } 
        //     }
        // }
        // return res;