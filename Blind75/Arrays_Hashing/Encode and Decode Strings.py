from typing import List

class Solution:
    def encode(self, strs: List[str]) -> str:
        res = ""
        for s in strs:
            res += s
            res += str(len(s))
        return res

    def decode(self, s: str) -> List[str]:
        resList = []

        k = 0
        last_start = 0
        while k < len(s):
             s[k].isdigit():
                int length = sk
                k += 1
                resList.append(s[last_start:k])
                last_start = k+1
            k += 1
        
        return resList


if __name__ == '__main__':
    sol = Solution()
    encoded_list = sol.encode(["we","say",":","yes","!@#$%^&*()"])
    decoded_str = sol.decode(encoded_list)