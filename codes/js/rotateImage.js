/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
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
  

    return matrix;
    
    
};

    //arr.forEach((val,i)=>{
    //    console.log("val ", val ,' index ',i)
    //})
//


/***

  //123  741
    //456  852
    //789  963
    var s = new Array ()
    var myStack = []
    for(var i =0; i < matrix.length ; ++i){

        for(var j =0 ; j<matrix[i].length ; ++j){
            var temp = matrix[i][j]
            myStack.push(temp)
        }
        myStack.reverse()
        myStack.forEach((val)=>{
            s.push(val)
        })
    }
    var jChanger = matrix[0].length
    console.log(jChanger)
    let m=0
    let n=0
    var count =0
    while(myStack!=null){

    }


    //var j=0;
    //for(var i =0; i < matrix.length ; ++i){
    //    if(i)
    //    var arEl = matrix[i][j]
    //    
    //}


    //var arr = new Array();
    //var myMain= new Array();
    //for(var i =0; i < matrix.length ; ++i){
//
    //    for(var j =0 ; j<matrix[i].length ; ++j){
    //        
    //        var ele = myStack.pop()
    //        arr.push(ele)
    //    }
    //    arr.reverse()
    //    arr.forEach((val)=>{
    //        myMain.push(val)
    //    })
//
    //}
//
    //for(var i =0; i < matrix.length ; ++i){
//
    //    for(var j =0 ; j<matrix[i].length ; ++j){
    //        
    //        ele = myMain.pop()
    //        matrix[i][j]=ele
    //       
    //    }
    //}

   
    


 */