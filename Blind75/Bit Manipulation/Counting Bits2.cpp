#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp = {0};
        int twoToPower = 1; // twoToPower = 2, 4, 8, 16...

        for (int i = 1; i <= n; i++) {
            if (i == twoToPower) {
                dp.push_back(1);
            }
            else if (i == twoToPower << 1) {
                // This line doesn’t actually modify the value of `twoToPower`
                // twoToPower << 1;
                twoToPower <<= 1;
                dp.push_back(1);
            }
            else {
                // 1 for twoToPower, 
                // dp[i - twoToPower] for the rest
                dp.push_back(1 + dp[i - twoToPower]);
            }
        }
        return dp;
    }
};

int main() {
    Solution sol;
    vector<int> res = sol.countBits(4);
    return 0;
}