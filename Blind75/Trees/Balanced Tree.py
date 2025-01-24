# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        if (not self.isBalanced(root.left)) or (not self.isBalanced(root.right)):
            return False
        if abs(self.getHeight(root.left) - self.getHeight(root.right)) > 1:
            return False
        return True
    
    def getHeight(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        return 1 + max(self.getHeight(root.left), self.getHeight(root.right) )