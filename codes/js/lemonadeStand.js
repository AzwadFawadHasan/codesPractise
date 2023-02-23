/**
 * @param {number[]} bills
 * @return {boolean}
 */
var lemonadeChange = function(bills) {

    var five=0
    var ten =0;
    for(var i =0; i<bills.length;++i){
        if(bills[i]==5){
            ++five;
        }else if(bills[i]==10){
            if(five>=1){
                ++ten
                --five;
            }else{
                return false;
            }
        }else if(bills[i]==20){
            if(ten>=1 && five>=1){
                ten--;five--;
            }else if(ten<1 && five>=3){
                five-=3
            }
            else{
                return false
            }
        }
    }
    return true;

    
    
   
   
};
/***

    var five =0;
    var ten =0;

    bills.forEach((v)=>{
        
        if(v==5){five+=1}
        else if(v==10 && five>=1){
            five-=1;
            ten+=1;
        }
        else{
            if(ten>0 && five>0){
                ten-=1
                five-=1
                console.log('done')
            }
            else if(five >=3){
                five-=3
                console.log('done2')
            }
            else{return false}
        }
    })
 */

/**
 elif bill == 20: 
                if counter[10] > 0 and counter[5] > 0: 
                    counter[10] -= 1
                    counter[5] -= 1
                elif counter[5] >= 3: counter[5] -= 3
                else: return False 

 */
/***

 //customer provides 5,10,20 dollars
    //
    var count10, count20, count5, temp;
    count5 = 0;
    count10 = 0;
    count20 = 0;

    for (var i = 0, _pj_a = bills.length; i < _pj_a; i += 1) {
      temp = bills[i];

      if (temp === 5) {
        count5 += 1;
      } else {
        if (temp === 10) {
          if (count5 < 1) {
            return false;
          }

          count10 += 1;
          count5 -= 1;
        } else {
          if ((count10 <= 1 && count5 <= 0) || (count10 <= 0 && count5 <= 2)) {
            return false;
          }

          else if (count10 >= 1 && count5 >= 1) {
            count10 -= 1;
            count5 -= 1;
          } else if (count10 <= 0 && count5 >= 3) {
              count -= 3;
            }
          
        }
    }
    return true;




 */