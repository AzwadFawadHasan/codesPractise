/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    
    let loopCounter =0;
     var mod=0;
     //var n=2;
     var nCopy=n;
     var numbers = [];
     while(n!=0){
         
         mod=n%10;
         numbers[loopCounter]=mod;
         n=Math.floor(n/10);
         ++loopCounter;
         //console.log("Welcome to Programiz! \n mod is"+ mod +"\n n is "+n );
         
        
         
         
         
             
             var sum=0;
             for(var j=0; j<numbers.length; ++j){
                 sum += (numbers[j]*numbers[j]);
                  //console.log("Welcome to Programiz! \n sum is"+ sum );
             }
            
             if(sum==1){
                 //console.log("Welcome to Programiz!TRUEEEEEEEEEEEEEEe"+ sum );
                 return true;
             }
             numbers=[];
             loopCounter=0;
             sum=0;
  
 
     }
     //console.log("Welcome to Programiz!False"+ sum );
     return false;
     
 };