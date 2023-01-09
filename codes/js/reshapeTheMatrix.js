/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
var matrixReshape = function(mat, r, c) {
    var wantedElements= r*c;
    var actualElements=0;
    for(var i =0; i<mat.length;++i){
        for(var j=0;j<mat[i].length;++j){
            ++actualElements;
        }
    }
    if(actualElements!=wantedElements){
        return mat;
    }
    var reshape=[];
    var temp=[];
    var tempFlag=0;
    var index=0;
    for(var i =0; i<mat.length;++i){
        for(var j=0;j<mat[i].length;++j){
            temp.push(mat[i][j]);
            
        }
       // var temp
        reshape[index]=temp;
        //temp=[];
        //tempFlag=0;
    }
    
    return reshape;
};