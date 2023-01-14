/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {number}
 */
var getDecimalValue = function(head) {

    var arr=[];
    while(head!=null){
        arr.push(head.val)
        head=head.next;
    }
    var sum=0;
    //arr.forEach((i,index)=>{
    //    //console.log(i)
    //    //sum+=i;
    //    var res =Math.pow(2, index) * i;
    //    sum+=res
//
//
//
    //})
//
    var res=0;
    var index=0;
    for(var i=arr.length-1; i >=0 ; --i ){
        //console.log(arr[i])
        res = Math.pow(2,index) * arr[i];
        sum+=res;
        //res=0;
       // [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
       ++index

    }
    return sum;
    
};