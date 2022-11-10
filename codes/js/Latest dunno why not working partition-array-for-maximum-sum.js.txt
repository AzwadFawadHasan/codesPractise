console.log("Hello, World!");


    
//Given
const arr=[1,15,7,9,2,5,10]; let k=3;

//baseCase
if(arr.length==1 && k==1){
        return arr[0];
    }

//sorting array in descending order
var arrayLength = arr.length;
arr.sort(function(a, b){return b - a});

/*
//print arrray in same line

var string = "";
  arr.forEach(function(element){
      string += element;
  });
console.log(string); //123
*/

//checking the sorted array
for (var i = 0; i < arrayLength; i++) {
console.log(arr[i]);
//Do something
}

let div = arrayLength/k;
div=Math.round(div);
console.log(div);
let mod = arrayLength%k;
console.log(mod);
let result=0;
let iCounter=0;
//for div
for(var i=0;i<div;++i){
  
  for(var j =0;j<k;++j){
    result+=arr[i]
  }
  
  ++iCounter;
}


console.log(result)

for(var i=0;i<mod;++i){
  
  for(var j =0;j<(k-div);++j){
    result+=arr[iCounter]
  }
  
  ++iCounter;
}
console.log(result)
/*let remain=arrayLength-div;
if(mod!=0){
  for(var i=0;)
}*/