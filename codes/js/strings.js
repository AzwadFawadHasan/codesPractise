let myString = "hello World";
console.log(myString);

//Template literals
let boy1='nigga1';//not template literal
let boy2='cracker1';//not template literal

let sentence =`string template literal`;

//STRING INTERPOLATION->when we directly insert variables in string
sentence =`${boy1} string template literal`;
console.log(sentence);

//Escape sequence character is bascially backslash \

sentence2 =`summer \`late\` literal`;
console.log(sentence2);
sentence2 =`four`;


console.log(sentence2.length);

// \n -> newline
// \t -> newline
// \r -> carriage return 

console.log(sentence2);
console.log(sentence2.toUpperCase());
console.log(sentence2.toLowerCase());

//sentence - four
//           0123
//slice(a,b); From a <=slice< b
console.log(sentence2.slice(0,3));

//Slice another variation
console.log(sentence2.slice(0));//prints out four

console.log(sentence2.replace('f','n'));

//concat method

let friend = "Naman";

console.log(myString.concat("is a friend of ", friend, " ok"));

//Trim
let friend2= "       meena      ";
console.log(friend2.trim());//removes the spaces
console.log(friend2);

let fr = "Azwad Fawad Hasan";
let temp ="";
for (var i = 0 ; i <fr.length; ++i){
    //console.log(temp.concat(`${fr[i]}`));
    temp.concat(fr[i])
   
}
console.log(temp);