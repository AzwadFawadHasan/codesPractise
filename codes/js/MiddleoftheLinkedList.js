/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var middleNode = function(head) {
    var headCopy=head
    var len=0;
    while(head!=null){
        //console.log(head.val)
        ++len;
        head=head.next;
        
    }
    var flag=Math.floor(len/2);
    flag+=1;
    var len2=0;
    while(len2!=flag){
        //console.log(head.val)
        ++len2;
        if(len2==flag){break}
        headCopy=headCopy.next;
        
    }
    return headCopy;
    

    
};
//var temp=0;
    //if(count%2!=0){
    //    temp = Math.floor(count/2)
    //    
    //}else {
    //    temp =Math.floor((count/2)+1)
    //}
    //var j=0;
    //while(j!=temp){
    //    headCopy=headCopy.next;
    //    ++j
    //    if(j==temp){
    //        return headCopy.val;
    //    }
//
    //}
   //