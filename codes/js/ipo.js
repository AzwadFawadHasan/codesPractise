/**
 * @param {number} k
 * @param {number} w
 * @param {number[]} profits
 * @param {number[]} capital
 * @return {number}
 * 
 * REACTO
 * repeat
 * Example 
 * Approach
 * Code
 * Task
 * Optimize
 */

/**
At Most K profits

        n projects

        n[i]= pure profit

        capital[i] is needed to start it
    
        After finishing w+=pureProfit
 *//*
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
            
        };*/


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

            //k no. of distict projects
            //w iniial capital
            var currProfit=-1
            var currIndex=-1
            var currCapital=-1
            var iw=w
            var ans=0
            var flag=false
            var j=0;
            let count=0;
            while(flag!=true){
            for(var i=0; i < capital.length ; ++i){
        
                if((capital[i]<=w || capital[i]==w) && (profits[i]>currProfit)){
                    currProfit = profits[i]
                    currCapital=capital[i]
                    currIndex=i
                }
        
            }
            count++;
            j+=profits[currIndex]
            w=w-capital[currIndex]+profits[currIndex]
            if(count==k){flag= true}
            if(flag==true){
                ans=iw+j
                return ans
            }
        }
            
        
            
        
           
            
        };
        
        /*
        
         var maxProjectLimit =false
            var initialCapital = w
            //mapping two arrays into a 2d array
            let foundProject=-1
            var iSelector=0;
            var capIsSelected=[]
            while(maxProjectLimit!=true){
                for(var i =0; i <capital.length; ++i){//selecting capital and profit
                   let projectSelector=w;
                   let capSelect=-1
                   if(capital[i]<=projectSelector && capital[i]>=capSelect){
                       var index=i;
                       
                       capSelect = capital[i]
            
                   }
                   
                }
                w-=capSelect
                capIsSelected.push(index)
                initialCapital=initialCapital+profit[capIsSelected[iSelector++]]
                if(iSelector-1 == k){
                    return true;
                }
        
            }
            return 
        
        
            */


            /**
             * 
             * class Solution {
  fun findMaximizedCapital(k: Int, w: Int, profits: IntArray, capital: IntArray): Int {
    val indices = (0 until profits.size).sortedWith(Comparator<Int>{a, b -> capital[b] - capital[a]}).toMutableList();
    val pq = PriorityQueue<Int> { a, b -> b - a }
    var res = w
    repeat(k) {
      while (!indices.isEmpty() && res >= capital[indices.last()])
        pq.offer(profits[indices.removeAt(indices.size - 1)])
      res += pq.poll() ?: 0
    }
    return res
  }
}
             */