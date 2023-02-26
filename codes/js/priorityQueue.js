
  import {
    PriorityQueue,
    MinPriorityQueue,
    MaxPriorityQueue,
    ICompare,
    IGetCompareValue,
  } from '/datastructures-js/priority-queue';
let profits = [1,2,3,4,6]; let capital = [0,1,1,5,7]

let capitalAscQueue = new MinPriorityQueue()

for(let i=0; i<capital.length;++i){
    capitalAscQueue.enqueue(
        [capital[i],profit[i]], capital[i]
    )
}

for(let i=0; i<capital.length;++i){
    capitalAscQueue.front()
    console.log(capitalAscQueue)
}