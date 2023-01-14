/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumOfLeftLeaves = function myFun(root) {

    if(root==null){
        return 0;
    }
    else if(root.left!=null && root.left.left==null & root.left.right==null){
        return root.left.val + myFun(root.right)
    }
    else{
        return myFun(root.left) + myFun(root.right)
    }

    
    
};