from typing import List

def search(nums: List[int], target: int) -> int:
        N = len(nums)

        start = 0
        end = N-1

        while start <= end:
            mid = (start + end) // 2

            if nums[mid] < target:
                start = mid
            elif nums[mid] > target:
                end = mid
            else:
                return mid

        return -1

search([-1,0,2,4,6,8], 4)