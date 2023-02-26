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
            let capitalsAscendingQueue = new MinPriorityQueue();
            let profitsDescendingQueue = new MaxPriorityQueue();
        
            for(let i=0; i<capital.length;++i){
                capitalsAscendingQueue.enqueue([capital[i], profits[i]] , capital[i])
        
            }
        
            for(let i=0; i<k;++i){
                while(!capitalsAscendingQueue.isEmpty() && capitalsAscendingQueue.front().element[0] <=w){
                    let el = capitalsAscendingQueue.dequeue().element;
                    profitsDescendingQueue.enqueue(el,el[1])
                }
                if(profitsDescendingQueue.isEmpty()){return w}
                w+=profitsDescendingQueue.dequeue().element[1]
            }
        return w
        };
        /*
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
            let edge =false
            while(flag!=true){
            for(var i=0; i < capital.length ; ++i){
        
                if((capital[i]<=w || capital[i]==w) && (profits[i]>currProfit)){
                    currProfit = profits[i]
                    currCapital=capital[i]
                    currIndex=i
                    edge=true
                }
        
            }
            count++;
            j+=profits[currIndex]
            w=w-capital[currIndex]+profits[currIndex]
            if(!edge){
                return 0
            }
            if(count==k){flag= true;  return iw+j}
            if(flag==true){
                ans=iw+j
                return ans
            }
        }
            
        
            
        
           
            */
        
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