import heapq

class KthLargest:
    def __init__(self, k: int, nums: List[int]):
        nums_heap = []
        for n in nums:
            heapq.heappush(nums_heap, -1*n)
        self.nums_heap = nums_heap
        self.k = k

    def add(self, val: int) -> int: 
        heapq.heappush(self.nums_heap, -1*val)
        K = self.k
        popped_elems = []

        while K > 0:
            popped_elems.append(heapq.heappop(self.nums_heap))
            K -= 1
        res = popped_elems[-1]

        # restore self.nums_heap
        while K <= self.k:
            heapq.heappush(self.nums_heap, popped_elems.pop())
            K += 1

        return -1 * res
        

