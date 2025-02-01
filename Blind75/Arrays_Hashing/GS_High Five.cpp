#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int avgOfPQ(priority_queue<int>& pq, int k) {
        int avg = 0;
        int i = k;
        while (i--) {
            avg += pq.top(); pq.pop();
        }
        return avg / k;
    }

    int avgOfTopFive(priority_queue<int>& pq) {
        int sum = 0;
        int count = min(5, (int)pq.size());
        priority_queue<int> temp = pq;  // Create a temporary copy
        for (int i = 0; i < count; ++i) {
            sum += temp.top();
            temp.pop();
        }
        return sum / count;
    }

    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> res;
        unordered_map<int, priority_queue<int>> top5scores;

        for (const auto& vec: items) {
            int id = vec[0];
            int score = vec[1];
            top5scores[id].push(score);
        }
        for (auto& pair: top5scores) {
            int id = pair.first;

            priority_queue<int>& eachTopScores = pair.second;
            int pqSize = eachTopScores.size();
            while (pqSize > 5) {
                eachTopScores.pop();
                pqSize--;
            }
            res.push_back({id, avgOfTopFive(eachTopScores, 5)});
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> item = {{1,91},{1,92},{2,93},{2,97},{1,60},{2,77},{1,65},{1,87},{1,100},{2,100},{2,76}};
    sol.highFive(item);
    return 0;
}