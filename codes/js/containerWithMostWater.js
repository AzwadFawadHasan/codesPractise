/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let i=0;
    let j=height.length-1;
    var area =0
    var result=0
    while(i<j){
        area = (j-i)*Math.min(height[i],height[j])
        result = Math.max(area,result)
        if(height[i]<height[j]){
            ++i;
        }else{
            --j
        }
    }
    return result
    

    
      

    
};