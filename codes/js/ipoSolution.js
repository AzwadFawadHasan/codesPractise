/**Create MinPriorityQueue capitals_asc_queue and fill it with [capital, profit] pairs. It will be sorted by increasing capital.
Keep polling pairs from capitals_asc_queue until the project out of current capital capability. Put them into MaxPriorityQueue profits_desc_queue which sort by profit decreasingly.
Poll first from profits_desc_queue, it will be the project with maximum profit within current capital capability. Add the profit to capital w.
Repeat step 2 and 3 till finish k steps or no suitable project (profits_desc_queue.isEmpty()).
Time Complexity: For worst case, each project will be inserted and polled from both PriorityQueues once, so the overall runtime complexity should be O(NlgN), N is number of projects.
You sent*/
var findMaximizedCapital = function(k, w, profits, capital) {
    let capitals_asc_queue = new MinPriorityQueue();
    let profits_desc_queue = new MaxPriorityQueue();
    for (let i = 0; i < capital.length; i++)
        capitals_asc_queue.enqueue([capital[i], profits[i]], capital[i]);
   
	for (let i = 0; i < k; i++)    {
        while (!capitals_asc_queue.isEmpty() && capitals_asc_queue.front().element[0] <=w ) {
            let el = capitals_asc_queue.dequeue().element;
            profits_desc_queue.enqueue(el, el[1]);
        }
        if (profits_desc_queue.isEmpty()) return w;
        w += profits_desc_queue.dequeue().element[1];
    }
    return w;
}