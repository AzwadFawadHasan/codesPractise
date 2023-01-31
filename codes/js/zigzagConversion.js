/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if(s.length<numRows || numRows==1)return s
    //if(s.length < ){return s}
    var direction = false;
    var count=0
    var myArr = new Array(numRows).fill("")
    for(let i =0; i <s.length ;++i){
        var letter = s[i]
        myArr[count]+=letter;
        //++count;
        if(count===0 || count>=numRows-1){
            direction= !direction;
        }
        direction ? count++ : count--;


    }
   return myArr.join("")
};

/*
    if(s.length == 1){return s}
    let i=0;
    //var myMap  = new Map();
    //var key=0
    //my

    Rows =3
    PAYPALISHIRING
    0-13 //14 letters
    14/2
    PAHNAPLSIIGYIR
    
    line 1 = 0 4 8 12 //4. 4/ 4
    line 2 = 1 3 5  7  9 11 13//2 2 2 2
    line 3 = 2 6 10 // 4. 4


    PAYPALISHIRING
    0   P     6I    12N
    1   A   5L 7S  11I 13G
    2   Y 4A   8H 10R
    3   P     9I

    var arr = new Array();
    while(i!=s.length-1){
        letter = s[i]

        
        //myMap.set(key, )



        ++i
    }
    

*/