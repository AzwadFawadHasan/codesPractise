/**
 * @param {number} n
 * @return {number}
 */
var nextGreaterElement =  function(n) {
    
    let arr= n.toString().split("").map(Number);
    var noChange =1;
    let pVal=0
    let p =0
    for(var i =arr.length-1; i>=0;--i){
        if(arr[i-1]>=0){
            if(arr[i-1]>arr[i] || arr[i-1]==arr[i]){
                noChange++;
            }else if((arr[i-1]<arr[i])){
                pVal=arr[i-1]
                p=i-1;
                break;
            }
        }
    }
    if(noChange==arr.length){return -1}
    let curr=-1;
    let Gcurr =Infinity
    let Gind='a'
    for(var i=p+1 ; i<=arr.length-1; ++i){
        if(pVal<arr[i] && arr[i]<Gcurr){
            Gcurr=arr[i]
            Gind=i
        }
    }
   // console.log(Gcurr)
    let newArr =swap(arr,Gind,p)
    function swap(arr, Gind,p){
        var temp = arr[Gind]
        arr[Gind]=arr[p];
        arr[p]=temp;
        return arr
    }
    var slicedArr = arr.slice(p+1, arr.length)
    //console.log(slicedArr)
    slicedArr.sort(function(a,b){
        return a-b
    })
    //console.log(slicedArr)
    var  k=0;
    for(var i=p+1 ; i<=arr.length-1 ; ++i){
        newArr[i]=slicedArr[k];++k;
    }
    //console.log(newArr)
    const integer = parseInt(newArr.join(''));
    //console.log(integer)
    if(integer > n){

        return integer
    }
    else{

        return -1;
    }


    
};



/*

//  let n= 12443322
    //inde 01234567
    //     76543210
    let arr = n.toString().split("").map(Number);
    let l = arr.length-1, p=-1, pVal=0;
    var toggle=0;
    for(var  i = arr.length-1 ; i>=0 ; --i){
        if(!(arr[i+1]<arr[i])){
            p=i+1
            pVal=arr[i+1]
            toggle=1
        }
    }
    if(toggle==0){return -1}
    //console.log(pVal)
    //console.log(p)
    
    let curr=-1;
    let Gcurr =Infinity
    let Gind
    for(var i=p+1 ; i<=arr.length-1; ++i){
        if(pVal<arr[i] && arr[i]<Gcurr){
            Gcurr=arr[i]
            Gind=i
        }
    }
    //console.log(Gcurr)
    let newArr =swap(arr,Gind,p)
    function swap(arr, Gind,p){
        var temp = arr[Gind]
        arr[Gind]=arr[p];
        arr[p]=temp;
        return arr
    }
    var slicedArr = arr.slice(p+1, arr.length)
    //console.log(slicedArr)
    slicedArr.sort(function(a,b){
        return a-b
    })
    //console.log(slicedArr)
    var  k=0;
    for(var i=p+1 ; i<=arr.length-1 ; ++i){
        newArr[i]=slicedArr[k];++k;
    }
    //console.log(newArr)
    var  answer = parseInt(newArr.join(''));
    return answer

*/






/**

//while()
    var i=arr.length-1
    var toggle =0
    while(i!=0){
        if(arr[i]>arr[i-1]){
            var temp = arr[i-1]
            arr[i-1]=arr[i]
            arr[i]=temp
            i=arr.length-1
            toggle=1;
        }
        i--

    }
    if(toggle==1){
        return parseInt(arr.join(''))
    }
    return -1
    

 */

/**
 let original=n
    let digitsArray = n.toString().split("").map(Number);
    digitsArray.sort(function(a, b){return b - a});
    const num = parseInt(digitsArray.join(''));
    if(original<num){
        return num
    }else{
        return -1
    }


 *//*
  //230241
    //230
    //230412
    let arr = n.toString().split("").map(Number);

    //while()
    var i=arr.length-1
    var toggle =0
    while(i!=0){
        if(arr[i]>arr[i-1]){
            var temp = arr[i-1]
            arr[i-1]=arr[i]
            arr[i]=temp
            i=arr.length-1
            toggle=1;
        }
        i--

    }
    if(toggle==1){
        return parseInt(arr.join(''))
    }
    return -1
 */ 