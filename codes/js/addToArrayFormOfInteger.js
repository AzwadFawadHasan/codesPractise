/**
 * @param {number[]} num
 * @param {number} k
 * @return {number[]}
 */
var addToArrayForm = function(num, k) {
    console.log(Number(num.join("")) + k)
    let c= BigInt(num.join("")) + BigInt(k)
    return c.toString().split("")
        

    
};