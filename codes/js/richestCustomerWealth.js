/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    var maxVal=Number.MIN_VALUE;
    var sum=0;
    for(var i=0; i<accounts.length;++i){
        for(var j=0;j<accounts[i].length;++j){
            sum+=accounts[i][j];
        }
        if(sum>maxVal){
            maxVal=sum;
        }
        sum=0;
        
    }
    return maxVal;
};