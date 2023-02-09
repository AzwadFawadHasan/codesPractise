/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
   
    // we used BigInt() to convert binary to Integer. Syntax is BigInt(0b11) here `0b` is prefix and `11` is binary number
     let sum = BigInt(`0b${a}`) + BigInt(`0b${b}`);
     // sum is converted back to string using toString(2), here 2 is radix argument, so toString(2) converts to binary
     return sum.toString(2);
 
 
     
 };
 
 
 /******************
 
  var num1 =Number(a)
     var num2 =Number(b)
 
     var c=0;
     var res=new Array();
     if(num1==0 && num2==0  && c==0) return '0';
     while(num1!=0 || num2!=0  || c!=0){
         let last1= Math.floor(num1%10)
         let last2= Math.floor(num2%10)
         let sum=last1+last2+c;
         
         if(sum>=2){
             sum=0;
             c=1
         }else{
             c=0;
         }
         
         console.log(sum)
         res.push(sum)
         num1=Math.floor(num1/10)
         num2=Math.floor(num2/10)
         
 
     }
     res =res.reverse()
     return res.join('').toString()
 
 
 
 
  */
 
 /*
 
  var max =0;
     if(a.length>=b.length || a.length==b.length){
         max=a.length
     }else{
         max=b.length;
     }
     var aa = Number(a)
     var bb =Number(b)
     var carry =0;
     var res= new Array()
     while(aa!=0 && bb!=0){
         var amod =aa%10//1
         var bmod= bb%10//1
         var sum = amod + bmod + carry//2
         carry=0;    
         
         if(sum>=2){
             carry = amod+bmod-1
             sum=0
         }
         res.push(sum)
        
         aa=Math.floor(aa/10)//1
         bb=Math.floor(bb/10)//0
     }
     res.forEach((val)=>{
         console.log(val)
     })
     return res.join('').toString();
 
 
     */