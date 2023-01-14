//const arr = [1,3,4,5,12,12,3,263]
//arr.forEach((val, index)=>{
//    console.log(val + "<br>")
//    document.write("index"+index+":"+val+"<br>")
//})

var s = "anagram";  var t = "nagaram"
var arr= new Array(26).fill(0);
s.forEach((val,i,s)=>{
    var code = val.charCodeat()-'a'.charCodeAt();
    console.log(code)
    arr[i]++;
})
//t.forEach((val,i)=>{
//    var code = val.charCodeat()-'a'.charCodeAt();
//    arr[i]--;
//})
//arr.forEach((val,i)=>{
//    if(val!=0){return false}
//})
//return true