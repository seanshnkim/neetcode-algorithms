class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1, 0);
        
        int curTwoPower = 1;

        for (int i=1; i <= n; i++) {
            if (isTwoPower(i) ) {
                dp[i] = 1;
                curTwoPower << 1;
            }
            else {
                dp[i] = dp[curTwoPower] + dp[i - curTwoPower];
            }
        }
        return dp;
    }

    bool isTwoPower(int num) {
        if (num <= 0) return false;
        return (num & (num - 1)) == 0;
    }

};

// 0 -> 00
// 1 -> 01 -> 1개
// 2 -> 10 -> 1개
// 3 -> 01 + 10 -> 1+1개 = 2개 
// 4 -> 1개
// 5 
// 6 -> 4 + 2
// 7 -> 4 + 3
// 8, 16, 32 -> 
// 9 -> 8 + 1
// 10 -> 8 + 2
// 11 -> 8 + 3
// 12 -> 8 + 4


// dynamic programming
// fibonacci sequence
// -> memoization
// 1+1 = 2
// 1+2 = 3
// 2+3 = 5
// 3+5 = 8

// dynamic programming
// fib(n) = fib(n-1) + fib(n-2)

// dynamic programming

// def fib(n):
//     return fib(n-1) + fib(n-2)

// fib(5) = fib(4) + fib(3)
// fib(6) = fib(5) + dp[4]

// dp[4] = fib(4)