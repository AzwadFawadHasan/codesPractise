/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function(tokens) {
    var arr = []
    var res,first,second

    for(var i=0; i<tokens.length; ++i){
        let v = tokens[i]

        if(
            v=="+"||v=="-"||v=="/"||v=="*"
        ){
            console.log("operand found")
            if(v=="+"){
                while(arr.length!=0){
                    first =arr.pop()
                    second=arr.pop()
                    res = first+second
                    arr.push(res)
                    
                }
                arr.push(first+second)
            }
            else if(v=="-"){
                while(arr.length!=0){
                    first =arr.pop()
                    second=arr.pop()
                    res = second-first
                    arr.push(res)
                    
                }
                arr.push(second-first)
            }
            else if(v=="/"){
                while(arr.length!=0){
                    first =arr.pop()
                    second=arr.pop()
                    res = Math.floor(second/first)
                    arr.push(res)
                    
                }
                arr.push(Math.floor(second/first))
            }
            else if(v=="*"){
                while(arr.length!=0){
                    first =arr.pop()
                    second=arr.pop()
                    res = Math.floor(second*first)
                    arr.push(res)
                    
                }
                arr.push(Math.floor(second*first))
            }
            
        }
        else{
            arr.push(v)
        }




    }
    let r = arr.pop()
    return r;

    

    
};

/**
tokens.forEach((v,i)=>{
        if(v== '+' || v=='-' || v=='/' || v=='*'){
            
            //console.log('operator detected')  
            

            let second = myStack.pop()
            let first = myStack.pop();
            if(v=='+'){
                res=first+second
            }else if(v=='-'){
                res=first-second
            }else if(v=='*'){
                res=first*second
            }else{
                res=Math.floor(first/second)
            }
            myStack.push(res)


        }else{
            myStack.push(v)
        }


    })
    return myStack.pop() */

    /*
    //array of strings given
    var myStack = []
    var first
    var second
    var res=0
    var v=0;
    for(var i =0; i <tokens.length ; ++i){
        v=tokens[i]
        
        if(v=='+'){
            while(myStack.length!=null){
                first = myStack.pop()
                second = myStack.pop()
                res =first+second
                myStack.push(res)
            }
            myStack.push(first)

            
        }
        else if(v=='-'){
            while(myStack.length!=null){
                first = myStack.pop()
                second = myStack.pop()
                res =first-second
                myStack.push(res)
            }
            myStack.push(first)
        }else if (v=='/'){
            while(myStack.length!=null){
                first = myStack.pop()
                second = myStack.pop()
                res =Math.floor(first+second)
                myStack.push(res)
            }
            myStack.push(first)
        }else if(v=="*"){
            while(myStack.length!=null){
                first = myStack.pop()
                second = myStack.pop()
                res =first*second
                myStack.push(res)
            }
            myStack.push(first)
        }else{
            myStack.push(v)
        }

    }
    
    
    */