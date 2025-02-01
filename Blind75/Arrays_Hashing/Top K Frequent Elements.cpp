#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // HashMap
        // O(N)
        unordered_map<int, int> hashMap;
        for (int n : nums) {
            if (hashMap.find(n) == hashMap.end()) {
                hashMap[n] = 1;
            }
            else {
                hashMap[n] += 1;
            }
        }
        // Priority Queue
        priority_queue<pair<int, int>> pq;
        // O(N*logN)
        for (const auto& pair: hashMap) {
            pq.push(make_pair(pair.second, pair.first));
        }
        vector<int> res;
        // O(N*logN)
        while (k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

heapq.nlargest 연산은
list = []
for i in range(k):
    list.append(heapq.pop(hq))


int main() {
    Solution sol;
    vector<int> nums = {1,2,2,3,3,3};
    int k = 2;
    vector<int> res = sol.topKFrequent(nums, k);
    return 0;
}