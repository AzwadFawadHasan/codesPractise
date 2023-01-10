/**
 * @param {string} s
 * @return {string}
 */
var toLowerCase = function(s) {
    var arr=[];
    var rangeMin = "A".charCodeAt();
    var rangeMax = "Z".charCodeAt();
    for(var i=0; i<s.length;++i){
        var temp = s[i].charCodeAt();
        if(temp>=rangeMin && temp<=rangeMax){
            temp=temp+32
             
            arr.push(String.fromCharCode(temp))
        }
        else{
            arr.push(s[i])

        }

        
        
    }
    return arr.join("")
    
};