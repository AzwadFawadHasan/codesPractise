/**
 * @param {string[]} tokens
 * @return {number}
 */

 /***
 ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
 stack-> 10, 6, 9, 3, +
 first secd 
 3,  +   9,  = push(12)

 10, 6, 12,-11,*

 
 
 
 
  */
 var evalRPN = function(tokens) {
    var arr = new Array();
    var c=-1

    for(var i =0; i<tokens.length ; ++i){
        if(tokens[i]=='+'||tokens[i]=='*'||tokens[i]=='-'||tokens[i]=='/'){
            let first=arr.pop();
                //c-=1;
            let second = arr.pop();
            console.log("first", first, " second ",second)
            if(tokens[i]=='+'){
                
                
                arr.push(first+second)
                console.log("+ ", first+second)
                
            }else if(tokens[i]=='-'){
                
                
                arr.push(second-first)
                console.log("- ", second-first)
            }else if(tokens[i]=='/'){
                let jj = second/first
                if(jj>0){
                     jj = Math.floor(second/first)

                }
                else{
                    jj = Math.ceil(second/first)

                }
               
                arr.push(Number(jj))
                console.log("/ ", jj)
            }else if(tokens[i]=="*"){
               
                
                arr.push(Number(first*second))
                console.log("* ", Math.floor(second*first))

            }

        }else{
            let j = Number(tokens[i])
             console.log("pushing ",j)
            arr.push(j)
        }
    }
    let k= arr.pop()
    return k;
};/**


    var arr = []
    var arrCounter =-1;

    for(let i =0;i<tokens.length;++i){

        if(tokens[i] == '+' || tokens[i] == '/' || tokens[i] == '-' || tokens[i] == '*' ){
            if(tokens[i]=="+"){
                let second = tokens[arrCounter]//3
                arrCounter-=1
                let first = tokens[arrCounter]//9
                arr.pop();arr.pop()

                arr.push(first+second)
                arrCounter++;
                
            }
            if(tokens[i]=="-"){
                let second = tokens[arrCounter]
                arrCounter-=1
                let first = tokens[arrCounter]
                 arr.pop();arr.pop()
                arr.push(first-second)
                arrCounter++;
            }if(tokens[i]=="*"){
                let second = tokens[arrCounter]
                arrCounter-=1
                let first = tokens[arrCounter]
                 arr.pop();arr.pop()
                arr.push(first*second)
                arrCounter++;
            }if(tokens[i]=='/'){
                
                let second = tokens[arrCounter]
                arrCounter-=1
                let first = tokens[arrCounter]
                 arr.pop();arr.pop()
                arr.push(Math.floor(first/second))
                arrCounter++;
            
            }
        }else{
            ++arrCounter;
            let j = Number(tokens[i])
            arr.push(j)
            
        }
        
    }

    return tokens[arrCounter]


  


 */

/***
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

    

    

 */

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
    
    
    *//*


      var arr = []
    var res,first,second

    for(var i=0; i<tokens.length; ++i){ 
        let v = tokens[i]

        if(
            v=="+"||v=="-"||v=="/"||v=="*"
        ){
            console.log("operand found")
            if(v=="+"){
               
                    first =arr.pop()
                    second=arr.pop()
                    res = first+second
                    arr.push(res)
                    console.log("res  ",res)
                    
                
                
            }
            else if(v=="-"){
            
                    first =arr.pop()
                    second=arr.pop()
                    res = second-first
                    arr.push(res)
                    console.log("res  ",res)
               
            }
            else if(v=="/"){
                
                    first =arr.pop()
                    second=arr.pop()
                    res = Math.floor(second/first)
                    arr.push(res)
                    console.log("res  ",res)
                    
             
            }
            else if(v=="*"){
                
                    first =arr.pop()
                    second=arr.pop()
                    res = Math.floor(second*first)
                    arr.push(res)
                    console.log("res  ",res)
               
            }
            
        }
        else{
            arr.push(v)
        }




    }
    let r = arr.pop()
    return r;


    */