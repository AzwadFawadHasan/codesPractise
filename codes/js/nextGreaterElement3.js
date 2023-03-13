/**
 * @param {number} n
 * @return {number}
 */
var nextGreaterElement = function(n) {
    let original=n
    let digitsArray = n.toString().split("").map(Number);
    digitsArray.sort(function(a, b){return b - a});
    const num = parseInt(digitsArray.join(''));
    if(original<num){
        return num
    }else{
        return -1
    }
    
};