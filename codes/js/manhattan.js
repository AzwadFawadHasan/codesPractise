    /**
     * @param {number} x
     * @param {number} y
     * @param {number[][]} points
     * @return {number}
     */
    /*
                let items = [
            [1, 2],
            [3, 4],
            [5, 6]
            ];
            console.log(items[0][0]); // 1
            console.log(items[0][1]); // 2
            console.log(items[1][0]); // 3
            console.log(items[1][1]); // 4
            console.log(items);
        */

                x=3;
                y=4;
                points=[[1,2],[3,1],[2,4],[2,3],[4,4]];
        
                var xAxis=[];
                var yAxis=[];
                var count=0;
                
                for (var i=0; i<points.length; ++i){
                    for(var j=0; j<2; ++j){
                        if(j%2!=0){
                            //y cooridinate
                            if(points[i][j] == y){
                                //y coordinate match
                                xAxis[count]=i;
                                yAxis[count]=j;
                                ++count;
                            }
                        }
                        else{
                            if(points[i][j] == x){
                                //x coordinate match
                                xAxis[count]=i;
                                yAxis[count]=j;
                                ++count;
                            }
                            
                        }
                        
                    }
                    
                }
                var result=[];
                var rIndex=[];
                var current=0;
                var leastIndex=0;
                
                for(var i=0; i<count; ++i){
                    current=(Math.abs(x-xAxis[i][0]) + Math.abs(y-yAxis[i][1]));
                    result[i]=(Math.abs(x-xAxis[i][0]) + Math.abs(y-yAxis[i][1]));
                    rIndex[i]=i;
                    if(i>1){
                        for(var j=0; j<i;++j){
                            if(current<result[j]){
                                leastIndex=i;
                            }
                        }
                    }
                }
                return leastIndex;
                
