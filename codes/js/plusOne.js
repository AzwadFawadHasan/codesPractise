/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    return (BigInt(digits.join(""))+BigInt(1)).toString().split('')
};

/*var plusOne = function (digits) {
let arrToNumber =BigInt(digits.join(''))
let res = BigInt(arrToNumber + BigInt(1))
let myFunc = res => Number(res);



//
    //var str = digits.join("")
    ////console.log(str)
    //var num = Number(str)
    ////console.log(num)
    //num=num+1;
    //var myarr = new Array()
    //var n=num;
    //while(n!=0){
    //    var mod =n%10 
    //    myarr.push(mod)
    //    n= Math.floor(n/10)
    //    
    //}
    //var a = new Array()
    //while(myarr.length>0){
    //    var e=myarr.pop()
    //    a.push(e)
    //}
    ////var newStr = num.toString();
    ////console.log(newStr)
    //return a

    var plusOne = function (digits) {
    let arrToNumber =BigInt(digits.join(''))
    let res = BigInt(arrToNumber + BigInt(1))
    return res*/