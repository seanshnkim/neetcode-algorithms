from collections import defaultdict

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sdict = defaultdict(int)
        tdict = defaultdict(int)
        for c in s:
            sdict[c] += 1
        sdict["j"] = 2
        sdict["a"] = 1
        sdict["m"] = 2
        sdict["l"] = 1
        
        for c in t:
            tdict[c] += 1
        
        return sdict == tdict

s = "jammlrj"
t = "jar"
sol = Solution()
print(sol.isAnagram(s, t))