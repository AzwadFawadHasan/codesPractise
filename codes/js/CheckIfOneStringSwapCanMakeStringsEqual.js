/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */
    var s1="bank";
    var s2="kanb";
    var os =s1;
    var s=s2;
    var newOs="";
    var n1="";
    var n2="";
    //var j=s1.length -1;
    for(var i =0; i<s1.length; ++i){
        
        n1= s2[i];//k
        console.log('n1[',i,'] = ',n1);
        //os.replace(os[i])
        for(var j=s1.length -1;j>=0; ++j){
           
            


           if(newOs==s1){
            console.log('true')
            //return true
           }
        }
    }
    console.log('False')
    //return false;






/*

/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

 //check s1 and s2 length
 //create a count of number of swaps
 //if there is two swaps// then true
 //create a charArray variable
// create a swap variable
//loop through s1
    //add value to the corressponding char array
//loop through s2
    //if current value is not inside charArray
        //return false
    //else
        //Decrement the value in charArray
    //condition if s1[i]!=s2[]
        //swapp++
    //condition if swap is greater than 2
        //false
//return true;
  /*  
var areAlmostEqual = function(s1, s2) {
   var charArray = [];
   var swaps = 0;
   var temp ;
   //base case
   if(s1===s2){
       return true;
   }
   if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
       return false;
   }


   for(var i =0; i < s1.length ; ++i){
       charArray[i] = s1[i];

   }
   var charS1=[];
   var charS2=[];
   var flag=0;
   var loop=0;
   for (var i =0; i<s2.length;++i){
       temp = charArray[i];//0-b
      
           if(temp!=s2[i]){
               charS1[flag]=s1[i];
               ++flag;
               ++swaps;//1
               

               if(swaps>2 ){
                   loop=1;
                   //return false
               }
               
               
           }
       

   }
   if(loop==1){
       for(var j=0; j<charS1.length ; ++j){
       for(var w=0; w<s2.length;++w){
           if(charS1[j]!=s2[w]){
               return false;
           }
       }
               
   }

   }
   
   if(swaps==1|| swaps>2){return false}
   if (swaps==2 || swaps ==0){return true}

  
};


*/

/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

 //check s1 and s2 length
 //create a count of number of swaps
 //if there is two swaps// then true
 //create a charArray variable
// create a swap variable
//loop through s1
    //add value to the corressponding char array
//loop through s2
    //if current value is not inside charArray
        //return false
    //else
        //Decrement the value in charArray
    //condition if s1[i]!=s2[]
        //swapp++
    //condition if swap is greater than 2
        //false
//return true;
/*  
var areAlmostEqual = function(s1, s2) {
    var charArray = [];
    var swaps = 0;
    var temp ;
    //base case
    if(s1===s2){
        return true;
    }
    if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
        return false;
    }


    for(var i =0; i < s1.length ; ++i){
        charArray[i] = s1[i];

    }
    var charS1=[];
    var charS2=[];
    var flag=0;
    var loop=0;
    for (var i =0; i<s2.length;++i){
        temp = charArray[i];//0-b
       
            if(temp!=s2[i]){
                charS1[flag]=s1[i];
                ++flag;
                ++swaps;//1
                

                if(swaps>2 ){
                    loop=1;
                    //return false
                }
                
                
            }
        

    }
    if(loop==1){
        for(var j=0; j<charS1.length ; ++j){
        for(var w=0; w<s2.length;++w){
            if(charS1[j]!=s2[w]){
                return false;
            }
        }
                
    }

    }
    
    if(swaps==1|| swaps>2){return false}
    if (swaps==2 || swaps ==0){return true}

   
};

*/

var areAlmostEqual = function(s1, s2) {
    if(s1===s2){
        return true;
    }
    if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
        return false;
    }
    var unmatched=[];
    var flag=0;
    var swap =0;

    for(var i=0; i<s1.length; ++i){
        for(var j=0; j<s2.length; ++j){
            if(s1[i]!=s2[j]){
                unmatched[flag++]=s1[i];
                swap++;
                

            }
        }

        
    }
    for(var i=0; i<unmatched.length; ++i){
        //b
        for(var j=0; j<s2.length; ++j){
            //b X k 1
            //
            if(unmatched[i]==s2[j]){
                if(swap==2){
                    return true;
                }
                
                

            }
        }
        
        
    }
    return false;
    
    
    

    

    //var charArray = [];
    //var swaps = 0;
    //var temp ;
    ////base case
    //if(s1===s2){
    //    return true;
    //}
    //if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
    //    return false;
    //}
//
//
    //for(var i =0; i < s1.length ; ++i){
    //    charArray[i] = s1[i];
//
    //}
    //var charS1=[];
    //var charS2=[];
    //var flag=0;
    //var loop=0;
    //for (var i =0; i<s2.length;++i){
    //    temp = charArray[i];//0-b
    //   
    //        if(temp!=s2[i]){
    //            charS1[flag]=s1[i];
    //            ++flag;
    //            ++swaps;//1
    //            
//
    //            if(swaps>2 ){
    //                loop=1;
    //                //return false
    //            }
    //            
    //            
    //        }
    //    
//
    //}
    //if(loop==1){
    //    for(var j=0; j<charS1.length ; ++j){
    //    for(var w=0; w<s2.length;++w){
    //        if(charS1[j]!=s2[w]){
    //            return false;
    //        }
    //    }
    //            
    //}
//
    //}
    //
    //if(swaps==1|| swaps>2){return false}
    //if (swaps==2 || swaps ==0){return true}
//
   //
};


/**
 * @param {string} s1
 * @param {string} s2
 * @return {boolean}
 */

 //check s1 and s2 length
 //create a count of number of swaps
 //if there is two swaps// then true
 //create a charArray variable
// create a swap variable
//loop through s1
    //add value to the corressponding char array
//loop through s2
    //if current value is not inside charArray
        //return false
    //else
        //Decrement the value in charArray
    //condition if s1[i]!=s2[]
        //swapp++
    //condition if swap is greater than 2
        //false
//return true;
/*  
var areAlmostEqual = function(s1, s2) {
    var charArray = [];
    var swaps = 0;
    var temp ;
    //base case
    if(s1===s2){
        return true;
    }
    if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
        return false;
    }


    for(var i =0; i < s1.length ; ++i){
        charArray[i] = s1[i];

    }
    var charS1=[];
    var charS2=[];
    var flag=0;
    var loop=0;
    for (var i =0; i<s2.length;++i){
        temp = charArray[i];//0-b
       
            if(temp!=s2[i]){
                charS1[flag]=s1[i];
                ++flag;
                ++swaps;//1
                

                if(swaps>2 ){
                    loop=1;
                    //return false
                }
                
                
            }
        

    }
    if(loop==1){
        for(var j=0; j<charS1.length ; ++j){
        for(var w=0; w<s2.length;++w){
            if(charS1[j]!=s2[w]){
                return false;
            }
        }
                
    }

    }
    
    if(swaps==1|| swaps>2){return false}
    if (swaps==2 || swaps ==0){return true}

   
};

*/

var areAlmostEqual = function(s1, s2) {
    if(s1===s2){
        return true;
    }
    if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
        return false;
    }
    var unmatched=[];
    var flag=0;
    var swap =0;

    for(var i=0; i<s1.length; ++i){
        for(var j=0; j<s2.length; ++j){
            if(s1[i]!=s2[j]){
                unmatched[flag++]=s1[i];
                swap++;
                

            }
        }

        
    }
    for(var i=0; i<unmatched.length; ++i){
        //b
        for(var j=0; j<s2.length; ++j){
            //b X k 1
            //
            if(unmatched[i]==s2[j]){
                if(swap==2){
                    return true;
                }
                
                

            }
        }
        
        
    }
    return false;
    
    
    

    

    //var charArray = [];
    //var swaps = 0;
    //var temp ;
    ////base case
    //if(s1===s2){
    //    return true;
    //}
    //if((s1.length !=s2.length) || (s1.length<1) || (s2.length>100)){
    //    return false;
    //}
//
//
    //for(var i =0; i < s1.length ; ++i){
    //    charArray[i] = s1[i];
//
    //}
    //var charS1=[];
    //var charS2=[];
    //var flag=0;
    //var loop=0;
    //for (var i =0; i<s2.length;++i){
    //    temp = charArray[i];//0-b
    //   
    //        if(temp!=s2[i]){
    //            charS1[flag]=s1[i];
    //            ++flag;
    //            ++swaps;//1
    //            
//
    //            if(swaps>2 ){
    //                loop=1;
    //                //return false
    //            }
    //            
    //            
    //        }
    //    
//
    //}
    //if(loop==1){
    //    for(var j=0; j<charS1.length ; ++j){
    //    for(var w=0; w<s2.length;++w){
    //        if(charS1[j]!=s2[w]){
    //            return false;
    //        }
    //    }
    //            
    //}
//
    //}
    //
    //if(swaps==1|| swaps>2){return false}
    //if (swaps==2 || swaps ==0){return true}
//
   //
};