#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sDict;
        unordered_map<char, int> tDict;

        for (char c: s) {
            if (sDict.find(c) == sDict.end()) {
                sDict[c] = 1;
            }
            else {
                sDict[c] += 1;
            }
        }
        for (char c: t) {
            if (tDict.find(c) == tDict.end()) {
                tDict[c] = 1;
            }
            else {
                tDict[c] += 1;
            }
        }
        return sDict == tDict;
    }
};

#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}