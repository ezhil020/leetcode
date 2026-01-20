# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        queue = deque()
        if not root :
            return []
        queue.append(root)
        result = []
        while queue:
            levelsize = len(queue)
            level = []
            for _ in range(levelsize):
                element = queue.popleft()
                if element.left:
                    queue.append(element.left)
                if element.right:
                    queue.append(element.right)
                level.append(element.val)
            result.append(level)
        return result

        
        