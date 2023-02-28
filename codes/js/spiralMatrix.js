/**
 * @param {number[][]} matrix
 * @return {number[]}
    matrix.length = 3
    matrix.length-1=2

    00
    10
    20
    21
    22
    12
    02
    01
    11

//**** mid of r 
////////////////////////
    00
    10
    20
    30
    31
    32
    22
    12
    02
    01
    11
    21

for (let j=0; j<matrix.length; ++j){
        for(let i=0; i<matrix.length;++i){
            let temp = matrix[i][j]
            console.log(temp)
        }
    }
  
    
 */

    var spiralOrder = function(matrix) {

        var res = []
        var BeginColumn = 0
        var BeginRow = 0
        var EndColumn = matrix[0].length-1
        var EndRow = matrix.length-1
    
        while(BeginColumn<=EndColumn && BeginRow<=EndRow){
            for(let i=BeginColumn; i<=EndColumn; ++i){
                let k = matrix[BeginRow][i]
                res.push(k)
            }
            ++BeginRow;
            for(let i=BeginRow; i<=EndRow; ++i){
                let k = matrix[i][EndColumn]
                res.push(k)
            }
            EndColumn--
            if(BeginRow<=EndRow){
                for(let i=EndColumn; i>=BeginColumn; --i){
                    let k = matrix[EndRow][i]
                    res.push(k)
                }
               
            }
            EndRow-- 
            if(BeginColumn <= EndColumn){
                for(let i=EndRow; i>=BeginRow; --i){
                    let k = matrix[i][BeginColumn]
                    res.push(k)
                }
                
            }
            BeginColumn++
            
        }
        return res
    
        
    };/**
        var iS=0
        var jS=0
        if(matrix.length%2!=0){
            iS=Math.floor(matrix.length/2)
        }else{
            iS=matrix.length/2
        }if(matrix[0].length%2!=0){
            jS=Math.floor(matrix.length/2)
        }else{
            jS=matrix.length/2
        }
    
        var i=-1;
        var j=0;
        var arr = []
        while(i!=iS && j!=jS){
    
            if(i==matrix.length){
                if(j==matrix[0].length){
                    if(j==-1){
                        j++
                        i++
                        
                    }else{
                        j--
                        let k=matrix[i][j]
                        arr.push(k)
                    }
                    
    
                }else{
                    j++
                    let k=matrix[i][j]
                    arr.push(k)
    
                }
                
    
            }else{
                ++i
                let k=matrix[i][j]
                arr.push(k)
          
    
            }
            
    
        }
        return arr
    
        
    
       
    
    
    
     */
    
    
    
    /*
    if(i==matrix.length-1){
                if(j==matrix[0].length-1){
                    if()
                    i--
    
                }
                else{
                    j++
    
                }
               
           }
    */ 
    
    /**
    
     let i=0;let j=0;
        ans=false;
        let arr = []
        let temp = matrix[i][j]
        while(ans!=true){
            
            for(i;i<matrix.lenght;++i){//right
                temp = matrix[i][j]
                arr.push(temp)
                if(i==matrix.length-1 && j==0){
                    ++j;
                    for(j,j<matrix.length;j++){//down
                        temp = matrix[i][j]
                        arr.push(temp)
                    }
                    //j=matrix.length; i=matrix.legnth
                    if(j==matrix.length-1 && i==matrix.length-1){
                        --i
                        for(i;i>=0;--i){
                            temp = matrix[i][j]
                            arr.push(temp)
                        }
    
                    }
    
    
    
    
                }
            }
            ans=true
    
        }
        return arr
        
    
     */