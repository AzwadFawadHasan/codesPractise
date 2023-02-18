/**
 * @param {number[][]} mat
 * @param {number[][]} target
 * @return {boolean}
 */


function mod(matrix,target){
    jCounter = matrix.length-1
   var s = []
   var arr = new Array()
   var count = 0
   for(let j =0; j<matrix.length; ++j){
       for(let i=0; i<matrix.length; ++i){
           let temp = matrix[i][j]
           //console.log(temp)
           s.push(temp)
           
           
           
       }
       s.reverse();
       s.forEach((val,i)=>{
       arr.push(val)
       })
       s=[]
       
   }
   let flag=0;
   for(let i =0; i<matrix.length; ++i){
       for(let j=0; j<matrix.length; ++j){
           let temp = arr[flag++]
           matrix[i][j]=temp
           //console.log(temp)
          // s.push(temp)
           
           
           
       }
       
       
   }

  // arr.forEach((val,i)=>{
  //    console.log("val ", val ,' index ',i)
  // })
  //     //console.log(arr[0])
  //var flag=0;
  // for(let i =matrix.length-1; i>=0; --i){
  //     for(let j=0; j<matrix.length; ++j){
  //         let e = arr[flag]
  //         matrix[i][j] =e
  //         flag++;
  //         
  //         
  //         
  //     }
  // }
//
  for(let i =0; i<matrix.length; ++i){
       for(let j=0; j<matrix.length; ++j){
           let temp =  matrix[i][j]
           let temp2 =  target[i][j]
           if(temp!=temp2){
               return false;
           }
          
           //console.log(temp)
          // s.push(temp)
           
           
           
       }
       
       
   }

return true;
   
}


var findRotation = function(matrix, target) {
   var count =0

  var ans = mod(matrix,target)
  while(count<4 && ans!=true){
      ++count
      ans = mod(matrix,target)
  }
  if(ans==false){return false}
  return true;
   
};


/***

//column->then row-> columnWise Rotation
   //row-> then column for loop-> for RoWise Rotations

   var s=[]
   var arr= new Array()
   for(var j=0; j<mat.length;++j){

       for(var i=0; i<mat.length; ++i){

           let temp  = mat[i][j]

           s.push(temp)


       }
       s.reverse()
       s.forEach((v)=>{
           arr.push(v)
       })
       s=[]

       

   }
   arr.forEach((v)=>{
           console.log(v)
       })
let flag=0
   for(var i=0; i<mat.length;++i){

       for(var j=0; j<mat.length; ++j){

           let temp  = arr[flag++]
           mat[i][j] = temp



       }
      

       

   }
   if(mat==target){return true}
   return false;




*/