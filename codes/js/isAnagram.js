/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 * 
 */

var s = "rat";
var t = "car";

    var arr= new Array(26).fill(0);
    for(var i=0; i<s.length;++i){
        var code = s[i].charCodeAt()-'a'.charCodeAt();
        
        arr[code]++;
    }
    for(var j=0; j<t.length;++j){
        var code = t[j].charCodeAt()-'a'.charCodeAt();
        arr[code]--;

    }
    for(var k=0; k<arr.length;++k){
        //var code = val.charCodeat()-'a'.charCodeAt();
        console.log(arr[i])
       if(arr[k]!=0){
            console.log('HERE IS FALSE')
            //return false;
        }
        
    }
    console.log('HERE IS tRUE')
    //return true;



    /*

    /**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 *//*
var isAnagram = function(s, t) {
    var arr= new Array(26).fill(0);
    for(var i=0; i<s.length;++i){
        var code = s[i].charCodeAt()-'a'.charCodeAt();
        arr[code]++;
    }
    for(var j=0; j<t.length;++j){
        var code = t[j].charCodeAt()-'a'.charCodeAt();
        arr[code]--;

    }
    for(var k=0; k<arr.length;++k){
        //var code = val.charCodeat()-'a'.charCodeAt();
        //console.log(arr[i])
       if(arr[k]!=0){
           
           return false;
       }

    }
    return true;

};*/