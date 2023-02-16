/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    var s2 = s.trim()
    var i = s2.length-1
    let count =0
    for(i;i>=0;--i){
        
        if(s2[i]==' '){
            return count
        }
        count++
    }
    return count;
     
 };
 
 /****
 
  var i = s.length-1;
     var count =0;
     while(s[i]==' '){//removing any space from behind
 
         
         i--
 
 
     }
     //console.log(s[i])
     while(s[i]!=' '){//Stopping if any space found
 
         
         count++;
         i--
 
 
     }
     return count
     
 
 
 
  */
 
 
 
  /****
  
  
  
   var cnt = 0;
 
     for(var i = s.length-1;i>=0;i--)
     {
         if(s[i]==' ')
         {
             if(cnt>0)
             {
                 return cnt;    
             }
             continue;
         }
 
         cnt+=1;
     }
     return cnt;
  
  
  
  
  
  
   */