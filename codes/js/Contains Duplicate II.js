nums = [1,2,3,1], k = 3

while(i<=nums.length && j>=0){
    if((nums[i]==nums[j])  && (i!=j)){
        abs=(i-j);
        if(abs<0){
            abs=abs*-1;
        }
        if(abs<=k){
            return true;
        }
        
    }
    i++; j=j-1;
}
return false;
