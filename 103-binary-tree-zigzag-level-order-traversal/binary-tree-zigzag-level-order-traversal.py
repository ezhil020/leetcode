from collections import deque

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        if not root:
            return []

        queue = deque()
        queue.append(root)
        result = []
        iteration = 0  

        while queue:
            levelsize = len(queue)
            level = []
            for _ in range(levelsize):
                element = queue.popleft()
                level.append(element.val)  

                if element.left:
                    queue.append(element.left)
                if element.right:
                    queue.append(element.right)

            if iteration % 2 == 1:
                level.reverse()

            result.append(level)
            iteration += 1 

        return result
