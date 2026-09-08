
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root:
            return False
        Q=[(root,targetSum-root.val)] 
        while Q:
                node,rem_sum=Q.pop()
                if not node.left and not node.right and rem_sum==0:
                    return True
                if node.left:
                        Q.append((node.left,rem_sum-node.left.val)) 
                if node.right:
                        Q.append((node.right,rem_sum-node.right.val))
        return False              
               