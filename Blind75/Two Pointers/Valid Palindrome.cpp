#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
bool isPalindrome(string s) {
    // 1. Remove non-alphanumeric characters (including blank spaces)
    s.erase(remove_if(s.begin(), s.end(), [](char c) {return !isalnum(c);} ) , s.end());
    // std::transform(s.begin(), s.end(), s.begin(), std::tolower);
    std::transform(s.begin(), s.end(), s.begin(), 
            [](unsigned char c){ return std::tolower(c); });

    // 2. Search starting from both ends
    int start = 0;
    int end = s.size()-1;
    while (start <= end) {
        if (s[start] == s[end]) {
            start++;
            end--;    
        }
        else {
            return false;
        }
    }
    return true;
    }
};

int main() {
    Solution sol;
    cout << sol.isPalindrome(" ") << endl;
    return 0;
}