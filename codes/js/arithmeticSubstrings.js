const addTwoNumbers = (l1, l2) => {
    let carry = 0;
    let previousNode = new ListNode();
    const headNode = previousNode;
    while (l1 || l2 || carry) {
      let val1 = 0;
      let val2 = 0;
      if (l1) {
        val1 = l1.val;
        l1 = l1.next;
      }
      if (l2) {
        val2 = l2.val;
        l2 = l2.next;
      }
      const sum = val1 + val2 + carry;
      carry = Math.floor(sum / 10); // sum > 9 ? 1 : 0
      const digit = sum % 10;
      const currentNode = new ListNode(digit);
      previousNode.next = currentNode;
      previousNode = currentNode;
    }
    return headNode.next;
  };
  
  
  /**
   * Definition for singly-linked list.
   * function ListNode(val, next) {
   *     this.val = (val===undefined ? 0 : val)
   *     this.next = (next===undefined ? null : next)
   * }
   */
  /**
   * @param {ListNode} l1
   * @param {ListNode} l2
   * @return {ListNode}
   */
   
   /*
  var addTwoNumbers = function(l1, l2) {
       let carry=0
       let prevNode = new ListNode()
       let headNode =prevNode
      while(l1|| l2 ||carry){
          let val1=0
          let val2=0
         
          if(l1){
               val1=l1.val
              l1=l1.next;
          }
          if(l2){
               val2 = l2.val
              l2=l2.next;
          }
           let sum = val1+val2+carry
           carry=Math.floor(sum%10);
           let digit = sum%10;
  
  
      //sum=sum>9?1:0;
      const currentNode= new ListNode(digit)
      prevNode.next=currentNode;
      prevNode=currentNode;
      
      }
     return headNode.next;
  
  
  
      //var a1=[];var a11=[]
      //var a2=[];var a22=[];
      //while(l1.next!=null){
      //    a1.push(l1.val);
      //    l1=l1.next;
      //}
      //while(l2.next!=null){
      //    a2.push(l2.val);
      //    l2=l2.next;
      //}
      //
      ////var d1=0;
      ////var d2=0;
      //for(var i=a1.length-1;i>=0;--i){
      //    a11.push(a1[i]);
      //    //if(i=a1.length-1){
      //    //    d1=a1[i]
      //    //}else{
      //    //    d1=d1*10 +a1[i]
      //    //}
      //}
      ////console.log(d1)
      //for(var i=a2.length-1;i>=0;--i){
      //    a22.push(a2[i]);
      //    // if(i=a2.length-1){
      //    //    d2=a2[i]
      //    //}else{
      //    //    d2=d1*10 +a2[i]
      //    //}
      //}
      ////console.log(d2)
      ////
      ////const digit1= Number(a11.join(''));
      ////const digit2= Number(a22.join(''));
      ////return digit1+digit2;
      //var l3 = new ListNode(a11[0], next);
      //for(var i=1;i<a11.length;++i){
      //    //a11.push(a1[i]);
      //    //if(i=a1.length-1){
      //    //    d1=a1[i]
      //    //}else{
      //    //    d1=d1*10 +a1[i]
      //    //}
      //    var temp =a11[i]
      //    
      //    l3.val=temp;
      //    l3=l3.next;
      //}
      //while(l3.next!=null){
      //    console.log(l3.val)
      //    l3=l3.next;
      //    
      //}
      
      
  };*/