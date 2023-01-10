/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
    //let str = "Apple, Banana, Kiwi";
    //let part = str.substr(7, 6);
    var max=0;var arr=[];
    if(word1.length>word2.length || (word1.length==word2.length)){
        max=word1.length;
        min=word2.length
    }else{
        max=word2.length;
        min=word1.length
        
        
    }
    
    for(var i =0; i<max;++i){
        if(i<=min-1){
            arr.push(word1[i])
            arr.push(word2[i])
            
        }else if(i>(min-1) && min==word1.length){
            arr.push(word2[i])
        }else{
            arr.push(word1[i])
        }
            
        
        

    }
    return arr.join("");
};