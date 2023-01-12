/**
 * @param {string[]} words
 * @param {string} order
 * @return {boolean}
 */
var isAlienSorted = function(words, order) {
    for(let i=1;i<words.length;i++) {
        const a = words[i-1]
        const b = words[i]
        const maxLen = Math.max(a.length, b.length)
        for(let j=0;j<maxLen;j++) {
            const indexA = order.indexOf(a[j])
            const indexB = order.indexOf(b[j])
            if (indexA > indexB) {
                return false
            } else if (indexA < indexB) {
                j=maxLen
            }
        }
    }
    return true
    //var orderPointArray  = [];
    //for(var i=order.length-1 ; i>=-0;i--){
    //    orderPointArray.push(order[i]);
    //}
    //var points=[];
    //var score=0;
    //for(var i=0; i<words.length-1; ++i){
    //    var currWord=words[i];
    //    var nextWord=words[i+1];
    //    var maxLength=0;
    //    var currOrnext=0;//0 means both equal//1 means curr bigger//2 means next bigger
    //    if(currWord.length==nextWord.length){
    //        maxLength=currWord.length
    //    }else if(currWord.length>nextWord.length){
    //        maxLength=currWord.length
    //        currOrNext=1;
    //        
//
    //    }else{
    //        
    //        maxLength=nextWord.length
    //        currOrNext =2;
    //    }
    //    var j=0;
    //    while(j!=maxLength){
    //        if(currWord[j]==null && nextWord[j]!=null){break}
    //        var currLetter = currWord[j]
    //        if(nextWord[j]==null && currWord[j]!=null){return false;}
    //        var nextLetter = nextWord[j]
    //        if(currLetter ==nextLetter){++j}
    //        else{
    //            //if(nextLetter!=null || currLetter!)
    //            var point=0;
    //            for(var k=0; k<orderPointArray.length;++k){
    //                if(currLetter == orderPointArray[k]){
    //                    point=k;
    //                }
    //                else if(nextLetter == orderPointArray[k]){
    //                    score=k;
    //                }
    //                if(score>point){
    //                    return false;
    //                }
    //                else if(score<point || score==point){
    //                        
//
    //                }
    //            }
    //        }
//
    //    }
//
//
    //}return true;
  

};

/*
  for(var i=0;i<words.length-1;++i){
        var currWord = words[i]
        var nextWord = words[i+1]
        var max=0;
        if(currWord.length ==nextWord.length){
            max=currWord.length;
        }
        else if(currWord.length >nextWord.length){
            max=currWord.length;
        }else{
            max=nextWord.length;
        }
        var j=0;
        while(j!=max){
            var currWordLetter =currWord[j];
            var nextWordLetter = nextWord[j];
            if(currWordLetter == nextWordLetter){
                j++
            }
            else if(currWordLetter != nextWordLetter){
                var currWordPoint=0;
                var nextWordPoint=0;

                for(var k=0; k<orderPointArray;++k){
                    if(orderPointArray[k]==currWordLetter){
                        currWordPoint=k;
                        if(nextWordPoint<currWordPoint){
                           break;
                        }
                    }else if(orderPointArray[k]==nextWordLetter){
                        nextWordPoint=k;

                    }
                }
                j++
            }
            
        }
        //for(var j=0; j<words[i].length;++j){
        //    var currLetter =words[i][j]
        //    for(var k=0; k<orderPointArray.length;++k){
        //        if(currLetter==orderPointArray[k]){
        //            score+=k;
        //            break;
        //        }
        //    }
        //}
        //points.push(score);





    }return true;
    for(var i=0;i<points.length-1;++i){
        if(points[i]<points[i+1]){
            return false;
        }
        else if(points[i]==points[i+1]){

        }

    }
    return true;


*/