/**
 * // Definition for a Node.
 * function Node(val, children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[]}
 */
var preorder = function(root) {
    let res=[];

    if(!root) return [];
    let stack = [root];
    while(stack.length){
        let node = stack.pop();
        res.push(node.val);
        for(let i =node.children.length-1; i>=0;i--){
            let child= node.children[i];
            stack.push(child)
        }

    }
    return res;
};