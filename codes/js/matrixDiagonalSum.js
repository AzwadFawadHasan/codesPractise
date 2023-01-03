/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function(mat) {
    var sum=0;
    if(mat.length%2==0){
        //even
        for(var i=0;i<mat.length;++i){
            for(var j=0;j<mat[i].length;++j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
        for(var i=mat.length-1;i>0;--i){
            for(var j=mat[i].length-1;j>0;--j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
        return sum;
    }else{
        
        for(var i=0;i<mat.length;++i){
            for(var j=0;j<mat[i].length;++j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
        for(var i=mat.length-1;i>0;--i){
            for(var j=mat[i].length-1;j>0;--j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
        var mid =Math.floor(mat.length/2);
        mid=mid+1;
        console.log(mid)
        sum=sum-mat[mid][mid];
        return sum;

    }
    
};


/**
 * @param {number[][]} mat
 * @return {number}
 */

/*
var diagonalSum = function(mat) {
    if(mat.length==1){
        return mat[0];
    }
    var sum=0;
    if(mat.length%2==0){
        //even
        for(var i=0;i<mat.length;++i){
            for(var j=0;j<mat[i].length;++j){
                if(i===j){
                    console.log('adding ',mat[i][j],'Where i=',i,'and j=',j)
                    sum+=mat[i][j];
                }
            }
        }//first diagonal which gooes from top left to bottom right
        var secondDiagonalCounter=mat.length-1;
        var j=0;
        var i=0;
        for(var i=0;i<mat.length;++i){
            j=mat[i].length-i;
            
                
                if(secondDiagonalCounter===j){
                    console.log('For second adding ',mat[i][j],'Where i=',i,'and j=',j)
                    sum+=mat[i][j];
                    secondDiagonalCounter=secondDiagonalCounter-1;
                    j=j-1;

                }
            
        }
        var x=mat.length-1;

        sum=sum+mat[x][0];
        return sum;
    }else{
        
        for(var i=0;i<mat.length;++i){
            for(var j=0;j<mat[i].length;++j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
       for(var i=0;i<mat.length;++i){
            for(var j=mat[i].length-1;j>=0;--j){
                if(i==j){
                    sum+=mat[i][j]
                }
            }
        }
        var mid = Math.ceil(mat.length/2);
        mid=mid-1;
        //console.log(mat[mid][mid])
        return sum-mat[mid][mid];

    }
    
};



*/