 var s = "pwwkew"
 //s = "abcabcbb"

var lengthOfLongestSubstring = function (s) {
    let set = new Set();
    let left = 0;
    let maxSize = 0;

    if (s.length === 0) return 0;
    if (s.length === 1) return 1;

    for (let i = 0; i < s.length; i++) {

        while (set.has(s[i])) {
            set.delete(s[left])//p->del//
            left++;//left
        }
        set.add(s[i]);//p//w//w
        maxSize = Math.max(maxSize, i - left + 1)//1 //2
    }
    return maxSize;
}















    /*
    var hMap = new Array(26).fill(0);
    var maxLen=0;
    var i=0;
    var currWord='';
    var code=-1;
    var arr=[];
    while(i!=s.length){
        currWord =s[i];
        code = currWord.charCodeAt() - 'a'.charCodeAt();
        if(hMap[code]==0){
            hMap[code]++;
            maxLen++;
            i++;
        }
        else{
            i=i-2;
            currWord =s[i];
            code = currWord.charCodeAt()-'a'.charCodeAt();
            maxLen=0;
            hMap= hMap.fill(0);
            hMap[code]++;
            maxLen++;
            i++;
        }
        arr.push(maxLen);
    }
    var ans=0;
    arr.forEach((val,ind)=>{
        if(val>ans){ans=val;}
    })
    return ans;*/

/*
    var hmap = new Array(26).fill(0);
    var word =[]
    var max=0;
    for(var i=1; i<s.length;++i){
        var prev=s[i-1];
        var currLetter= s[i]
        var currAcsii= currLetter.charCodeAt()
        var code = currAcsii-'a'.charCodeAt()
        if(hmap[code]==0){
            hmap[code]++
            word.push(currLetter)
            max=word.length;
            var maxString= word.join("")

        }else{
            hmap= new Array(26).fill(0)
            word=[];
            hmap[code]++;
            word.push(currLetter)



        }
        
        //console.log('current acsii code is ',code)


    }
    return word.length;

*/
/*
 var hmap = new Array(26).fill(0)
    var word=[]
    var allLen=[]
    var maxLen=0;

    if(s.length<=1){return s.length;}
    var i=0;
    while(i!=s.length){
        var currLetter=s[i]
        var code = currLetter.charCodeAt() - 'a'.charCodeAt();
        if(hmap[code]==0){
            hmap[code]++;
            ++maxLen;
            allLen.push(maxLen)
            ++i;
        }
        else{
            i=i-2;
            allLen.push(maxLen)
            maxLen=0;
            hmap = new Array(26).fill(0)
            hmap[code]++;++maxLen;i++;
            //word.push(currLetter)
            //maxLen=word.length
        }

    }
    var ans=0;
    allLen.forEach((val,ind)=>{
        if(val>ans){ans=val;}
    })
    return ans;*/