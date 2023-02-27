/**
 * @param {string} s
 * @return {boolean}
 */
var repeatedSubstringPattern = function(s) {
    
    
    let str = s+s;
    let newStr = str.substring(1,str.length-1)
    if(newStr.includes(s)){return true}
    else return false
    
    
    
    
    
     
        
        
        
    };/**
    var myHash =  new Array(26).fill(0)
       
        for(var i=0; i<s.length ; ++i){
            let j=s[i]
            var code = j.charCodeAt()-'a'.charCodeAt();
    
            myHash[code++]
    
    
    
        }
        var flag=false;
        var com=-1;var j=0;
        for(var k=0; k<myHash.length ; ++k){
            let curr=myHash[k]
            
            if(curr!=-1 && j==0){
                com=myHash[k]
                j=1;
            }
            if(curr!=com && j!=0){
                return false
            }
    
    
            
    
    
    
        }
        return true
        
    
    
    
    
    
     
    
     */
    
    /*
    
    var odd=false;
        var even =false;
        for(var i=0;i<myHashMap.length; ++i){
            if(myHashMap[i]>0){
               var value = myHashMap[i]
            }
        }
        var ans=false
        for(var i=0;i<myHashMap.length; ++i){
            if(myHashMap[i]>0){
                if(myHashMap[i]==value){ans=true}
                if(myHashMap[i]!=value){return false}
               
            }
        }
        if(ans==true){return true}
    
    
    
    
     *//**
     
     
      if(s.length==0 || s.length ==1)return false;
        var myHashMap = new Array(26).fill(0)
        var arr = new Array();
        for(var i=0;i<s.length; ++i){
            var curr=s[i]
            var code = curr.charCodeAt() - 'a'.charCodeAt();
            myHashMap[code]++;
            arr.push(code);
        }
    
        for(var i=0;i<s.length; ++i){
            var curr=s[i]
            var code = curr.charCodeAt() - 'a'.charCodeAt();
            myHashMap[code]++;
            arr.push(code);
        }
    
    
     
     
      *//*
         //Two pointer and Regex approch
    
        let len = s.length
       // var j=0;
        for(var i=Math.floor(s.length/2); i>0 ; --i){
            if(s.length%i==0){
                let j=0
                while((j+i<s.length) && (s.charAt(i)==s.charAt(i+j))){
                    j++;
                    if(i+j==s.length){
                        return true
                    }
    
                }
                 
    
            }
           
            
        }
        
        return false; */