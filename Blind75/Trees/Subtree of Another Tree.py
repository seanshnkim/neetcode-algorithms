# Definition for a binary tree node.

from typing import Optional
from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        q1 = deque([root])
        q2 = deque([subRoot])

        while q1 and q2:
            node1 = q1.pop()
            node2 = q2.pop()
            
            if node1 is None and node2 is None:
                continue
            elif node1 is None or node2 is None:
                return False
            else:
                if node1.val == node2.val:
                    if self.bfs_two_trees(node1, node2):
                        return True
            
            q1.appendleft(node1.left)
            q1.appendleft(node1.right)
            q2.appendleft(node2.left)
            q2.appendleft(node2.right)
        
        return False
    
    def bfs_two_trees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        q1 = deque([root1])
        q2 = deque([root2])

        while q1 and q2:
            node1 = q1.pop()
            node2 = q2.pop()
            
            if node1 is None and node2 is None:
                continue
            elif node1 is None or node2 is None:
                return False
            else:
                if node1.val != node2.val:
                    return False
            
            q1.appendleft(node1.left)
            q1.appendleft(node1.right)
            q2.appendleft(node2.left)
            q2.appendleft(node2.right)

        # Return True only if q1 and q2 are both empty
        return not q1 and not q2


if __name__ == "__main__":
    sol = Solution()
    root = [1,2,3,4,5], subRoot = [2,4,5]
    root = TreeNode()
    subRoot = TreeNode()
    sol.isSubtree()