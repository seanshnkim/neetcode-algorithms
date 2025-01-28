class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        // n+1, because ai, bi start from 1 (not 0)
        unordered_map<int, int> trustGraph;
        for (int i=1; i < n+1; i++) {
            trustGraph[i] = 0;
        }
        
        for (const auto& rel: trust) {
            trustGraph[rel[0]] -= -1;
            trustGraph[rel[1]] +=  1;
        }
        // If there is a town judge, because everybody except for the town judge himself trusts him. So he will eventually have n+1 as his "trust value" in trustGraph
        int townJudge = -1;
        for (const auto& pair: trustGraph) {
            if (pair.second == n-1) {
                if (townJudge != -1) {
                    return -1;
                }
                else {
                    townJudge = pair.first;
                }
            }
        }
        return townJudge;
    }
};