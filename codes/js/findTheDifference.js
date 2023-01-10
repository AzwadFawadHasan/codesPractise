/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */

var findTheDifference = function(s, t) {

    var arr = new Array(26).fill(0);
    
    for(var i =0 ; i< s.length;++i){

        let temp = s[i].charCodeAt() - "a".charCodeAt();
        arr[temp]++;


    }
    for(var i=0 ; i< t.length;++i){

        let temp = t[i].charCodeAt()-"a".charCodeAt();
        //console.log(temp)
        arr[temp]--;

        

    }
    
     for(var i=0 ; i< arr.length;++i){
        
        if(arr[i]<0){
             var temp2= i+"a".charCodeAt();
             var flag = String.fromCharCode(temp2);
             console.log(flag)
             return flag;;
            break;
        }
 
    }

    

    

};