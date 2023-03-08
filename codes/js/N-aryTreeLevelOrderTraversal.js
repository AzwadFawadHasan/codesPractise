/**
 * // Definition for a Node.
 * function Node(val,children) {
 *    this.val = val;
 *    this.children = children;
 * };
 */

/**
 * @param {Node|null} root
 * @return {number[][]}
 */
var levelOrder = function(root) {
    if(!root) return [];
    
    let q = [root]
    let ans =[]
    
    while(q.length){
        let len = q.length
        let e =q.slice()
        
        ans.push(q.map(node=>node.val))
        
        while(len--){//when it gets to 0, len will cooerce to falsi
        let node = q.shift()
        for(let child of node.children){
            q.push(child);
        }

        }
    }
    return ans
       

    
    
};