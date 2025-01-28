#include <vector>
#include <iostream>
#include <unordered_map>


using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s: strs) {
            vector<int> count(26, 0);
            for (char c: s) {
                count[c - 'a'] ++;
            }
            string key;
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair: res) {
            result.push_back(pair.second);
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<string> str1 = {"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> res = sol.groupAnagrams(str1);
    return 0;
}