# Definition for singly-linked list.
from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1 and not list2:
            return None
        if not list1:
            return list2
        if not list2:
            return list1
        
        head = list2 
        if list1.val <= list2.val:
            head = list1

        while list1 is not None and list2 is not None:
            if list1.val <= list2.val:
                if list1.next is None:
                    list1.next = list2
                    break
                if list1.next.val <= list2.val:
                    list1 = list1.next
                else:
                    next_node = list1.next
                    list1.next = list2
                    list2 = next_node
            else:
                if list2.next is None:
                    list2.next = list1
                    break
                if list2.next.val <= list1.val:
                    list2 = list2.next
                else:
                    next_node = list2.next
                    list2.next = list1
                    list1 = next_node
        return head


if __name__ == "__main__":
    # list1 = [5]
    # list2=[1,2,4]
    list1 = ListNode(5)
    list2 = ListNode(1)
    list2.next = ListNode(2)
    list2.next.next = ListNode(4)
    
    sol = Solution()
    answer = sol.mergeTwoLists(list1, list2)
    print(answer)