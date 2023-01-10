/**
 * @param {string} s
 * @return {string}
 */

 //parseInt converts a string to a number
 var freqAlphabets = function(s) {
    //s=1326#
    //var i=0;
    //var res=[]
    //while(i<=s.length){
    //    if(s[i]!='#' && s[i+2]!="#"){
    //        var a= s[i]
    //        a=a.charCodeAt(s[i]);//1(49)-9(57)
    //        res.push(String.fromCharCode(a))
    //        //console.log(a)
    //        var b= s[i+1]
    //        b=b.charCodeAt(b);//1(49)-9(57)
    //        res.push(String.fromCharCode(b))
    //        i+=2;
    //    }else{
    //        //j-10-> 106
    //        //
    //        var c= s[i]*10//1(49)-9(57)
    //        //res.push(String.fromCharCode(c))
    //        //console.log(a)
    //        c=c+ s[i+1]//.charCodeAt();//1(49)-9(57)
    //        res.push(String.fromCharCode(c))
    //        i+=3;
//
    //    }
    //    
    //}
    //return res.join("")
    //

    let ans = ""
    for(let i = s.length - 1; i>=0; i--){
        let code = s.charAt(i)
        if(code === "#"){
            code = s.charAt(i - 2) + s.charAt(i - 1) 
            i-=2
        }
        const num = parseInt(code);
        const val = String.fromCharCode(num + 96)
        ans = val + ans;

    }
    return ans





















    //97-a 122-z
    //97->a<-1
    //98->a<-2
    //106->a<-9
    //
    //var adder = 96;
    //var acsii=0;
    //var res=[];
    //for(var i =0; i<s.length;++i){
    //    var val=s[i];
    //    if(s[i+2]!='#'){
    //        acsii=adder+s[i]
    //        console.log(String.fromCharCode(acsii))
    //        res.push(String.fromCharCode(acsii))
    //        acsii=0;
//
    //    }
//
//
    //    
    //}
//





    ////105->i
    ////97 ->a
    //var arr=[];
    //for(var i=1; i<=26; ++i){
    //    arr.push(97+i);
//
    //}
    //var res=[];
    //for(var i=0; i<s.length; ++i){
    //    var value = s[i].charCodeAt();
    //    if(s[i+3]!='#'){
    //       
    //        res.push(arr(s[i]));
//
    //        
//
    //    }
    //    
//
    //}
//
//
    
};