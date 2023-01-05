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
    var index=0;
    for(var i =0; i<mat.length;++i){
        for(var j=0;j<mat[i].length;++j){
            reshape[index++]=mat[i][j];
        }
    }
    return reshape;
};