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
    }
    return true;