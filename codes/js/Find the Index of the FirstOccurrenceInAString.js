/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    var maxString=''
    var minString=''
    
    if(haystack.length > needle.length || haystack.length==needle.length)
    {maxString=haystack;minString=needle}
    else{minString = haystack;maxString=needle; return -1}

    for(var i=0; i <maxString.length; ++i){
        if(maxString[i] == minString[0]){
            //checking for all the characters in minString
            var j=i;
            var k=0;
            var counter=0
            for(k;k<minString.length; ++k){
                if(minString[k] == maxString[j]){
                    ++counter;
                }
                j++;
            }
            if(counter == minString.length){return i}
            else{
                counter=0;j=0;k=0;
            }

        }
    }return -1;
   
    
};


/*

    let firstIndex=0;
    for(var i=0; i <maxString ; ++i){
        var flag=0
        if(minString[i]==maxString[i])
        {    firstIndex =i
            var k=0
            for(var j=0; j< minString ;++j){
                
                if(minString[j]==maxString[i]){
                    flag
                }
                ++k;
            }
           

        }

    }
*/

/*

 var maxString= 0;
    var minString=0;
    if(haystack.length>needle.length || haystack.length==needle.length ){maxString = haystack; minString = needle;}else{maxString = needle; minString = haystack;}
     console.log("Entering loop")

var firstLetterOfMinString = minString[0]
    for(var i=0; i<maxString; ++i){
        var firstLetterOfMaxString = maxString[i]
       if(firstLetterOfMaxString == firstLetterOfMinString){
           console.log("Entering loop2")

           var j =i;
           console.log("i is ",i)
           //var j =i;
           var counter =0;
           for(var k =0; k < minString.length ;++k){
               if(maxString[j]==minString[k]){
                   ++counter;
               }
           }
           if(counter==minString.length){
               return i;
           }
            
        }
        
        
    }return -1



*/