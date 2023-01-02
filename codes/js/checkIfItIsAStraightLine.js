/**
 * @param {number[][]} coordinates
 * @return {boolean}
 */
var checkStraightLine = function(coordinates) {
    var x1,x2,y1,y2=0;
    //console.log('actual coordinates', coordinates[0])
    //console.log('actual coordinates', coordinates[1])
    x1=coordinates[0][0];
    y1=coordinates[0][1];
    
    //console.log('x1',x1);
    //console.log('y2',y1);

    x2=coordinates[1][0];
    y2=coordinates[1][1];
    //console.log('x1',x2);
    //console.log('y2',y2);
    //if((x2-x1)===0){return true;}
    if(x2==x1){
        for(var i =2; i<coordinates.length;++i){
            if(coordinates[i][0]!==x1){return false}
        }
         return true
    }
   
    var gradient = Math.floor((y2-y1)/(x2-x1));
    //console.log('gradient',gradient);
    for(var i =1; i<coordinates.length-1 ; ++i){
        x1=coordinates[i][0];
        y1=coordinates[i][1];
        x2=coordinates[i+1][0];
        y2=coordinates[i+1][1];
        //if((x2-x1)==0){return true;}
        var newGradient=Math.floor((y2-y1)/(x2-x1));
        if(newGradient!=gradient){return false}

       
        
    }
    return true;
};