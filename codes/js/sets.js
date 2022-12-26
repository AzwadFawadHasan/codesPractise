console.log('This is Sets js tutorial');
console.log('\nA set Stores unique values\n');
const mySet = new Set();//initializing an empty set;
console.log('This SET looks like this', mySet);
//Adding values to this set
mySet.add('hi');
mySet.add('hello');

console.log('This SET looks like this', mySet);
//using set constructor to create a new set2

let mySet2 = new Set([1,2,45, 'this', false, {a:4, b:5}]);

console.log('new SET looks like this', mySet2);

console.log('\n To find size of a set \n', mySet.size);

console.log('\n To check if a set has 34 \n', mySet.has(34));


console.log('\n Before Deleting an element from the set \n', mySet);
mySet.delete('hello');

console.log('\n After Deleting an element from the set \n', mySet);

console.log('\n Iterating a set \n');

for(let item of mySet2){
    console.log('Item in mySet is : ', item);
}
console.log('\n Iterating a set \n');
//using forEach loop to iterate a set
mySet2.forEach((item)=>{
    console.log('Item in mySet is : ', item);
})


//converting a set into an array
let arr = Array.from(mySet2);
console.log(arr);