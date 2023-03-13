// Online Javascript Editor for free
// Write, Edit and Run your Javascript code using JS Online Compiler


// ############# www.regexr.com

console.log("Welcome to Programiz!");
const regex = /very/g
var  text = "harry is a very very not good very bad very gud boy"
console.log("text",text)
console.log("replacing very with VERY using the .replace()  :\n", text.replace("very", "VERRY"))
console.log("replacing very with VERY using the REGEX  :\n", text.replace(/very/g, "VERRY"))