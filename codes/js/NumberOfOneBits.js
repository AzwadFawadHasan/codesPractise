/**
 * @param {number} n - a positive integer
 * @return {number}
 */
 var hammingWeight = function(n) {
    //let r=0;let mod=0;
    //for(var i=0; i<32; ++i){
    //    if(n!=0){
    //        mod=n%10;
    //        if(mod==1){
    //            ++r;
    //        }
    //        n=n/10;
    //        
    //    }
    //    
    //}
    //return r;
     
     if(n){//g means global search meaning continue searching even if u find 1 once
         return n.toString(2).match(/1/g).length;
     }
     return 0;
 };