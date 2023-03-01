/**
 * @param {number[][]} points
 * @param {number} k
 * @return {number[][]}
 */
var kClosest = function(points, k) {

    //var myArr = [];
    //var myMinQueue = new MinPriorityQueue()

    points.sort((a,b)=>(
         //points.sort((a,b) => (a[0] ** 2 + a[1] ** 2) - (b[0] ** 2 + b[1] ** 2));
         ((a[0]**2  + a[1]**2) - (b[0]**2  + b[1]**2))
    ))
    return points.slice(0,k)

    



    
    
    
};

/*


    let queueMin = new MinPriorityQueue();
    for(var i =0; i<points.length; ++i){
        var x1 =points[i][0]
        var y1 =points[i][1]
        var d =  Math.floor(Math.sqrt(x1) + Math.sqrt(y1))
        queueMin.enqueue(i,d)
        

    }
    
    let flag=0; var arr =[]
    while(flag!=k){
        let xx =queueMin.dequeue().element
        arr.push(points[xx])
        flag++;

    }
    return arr;
    

    */