//we can use any type of key or value


const myMap = new Map()
const key1 = 'myStr'
const key2 = {}
const key3 = function(){}
var myArr = new Array()
const key4 = myArr

myMap.set(key1, 'this is a string')
myMap.set(key2, 'this is a A blank object')
myMap.set(key3, 'this is an empty function')
myMap.set(key4, myArr.push(8))

//console.log('Maps in javascript', myMap)


//getting the values from a Map
let value1 = myMap.get(key1)
console.log('value of key1 ', myMap.get(key1))

//getting the size of a map
//console.log('size of myMAP  ', myMap.size)


//usign loops to get the value of a map
for(let[key,value] of myMap)
{
    // /console.log(key,value)
}

//getting only the keys
for(let[key] of myMap.keys())
{
    console.log(key)
}

//getting only the values
for(let values of myMap.keys())
{
    console.log(values)
}

//for each loop

myMap.forEach((val,key)=>{
    console.log('key is ', key)
    console.log('val is ', val)
})

//converting maps to an array

let myArray = Array.from(myMap)
console.log('Map to array is ', myArray)

// Converting map keys to an array

let myKeysArray = Array.from(myMap.keys())
console.log('maps to keys array is ', myKeysArray())

// Converting map values to an array

let myValuesArray = Array.from(myMap.values())
console.log('maps to keys array is ', myKeysValues())