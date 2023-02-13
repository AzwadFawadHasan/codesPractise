/**
 * @param {number[]} temperatures
 * @return {number[]}
 */
var dailyTemperatures = function(temperatures) {
    var answer = new Array ()
    var count =0
    var found = false
    for(var i =0; i < temperatures.length ; ++i){
        var currTemp  = temperatures[i]
        for(var j=i ; j < temperatures.length ; ++j){
            var nextTemp =  temperatures[j]
            found=false
            count++
            if(nextTemp>currTemp){
                found = true
                answer.push(count-1)
                break
            }

        }
        if(found == false){
            answer.push(0)
        }
        count=0;


    }
    return answer
    
};