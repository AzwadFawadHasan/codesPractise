/**
 * @param {string} command
 * @return {string}
 */
var interpret = function(command) {
    //G->G
    //()->o
    //(al)->al
    var i=0;
    var res=[];
    while(i!=command.length){
        if(command[i]=="G"){
            res.push('G')
            ++i
        }
        else if(command[i]=="(" && command[i+1]==")"){
            res.push('o');
            i+=2;
        }
        else{
            res.push('al');
            i+=4;
        }
        
    }
    return res.join("")
    
};