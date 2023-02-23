/**
 * @param {number} k
 * @param {number} w
 * @param {number[]} profits
 * @param {number[]} capital
 * @return {number}
 */

/**
At Most K profits

        n projects

        n[i]= pure profit

        capital[i] is needed to start it
    
        After finishing w+=pureProfit
 */
        var findMaximizedCapital = function(k, w, profits, capital) {

            var maxProjectLimit =k
            var initialCapital = w
            //mapping two arrays into a 2d array
            let foundProject=-1
            while(k!=0){
                for(var i =0; i <capital.length; ++i){
                   let projectSelector=w;
                   if(capital[i]<=projectSelector){
                       var index=i;
            
                   }
                }
            }
            
        };