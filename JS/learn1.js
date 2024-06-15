console.log("Hello world");

//Variables
const num = 6;
console.log(num);

const array = []; 
const object = {};

const newvar=null;
console.log(newvar);

const myArr= [1,2,3];
//myArr = [5]; // can't do this as it's constant

var myArray = [1,2,3];
myArray = [4];
console.log(myArray);

var newArray = new Array(1,2,"Hello");
console.log(newArray);

var myStack = [];
myStack.push(1);
myStack.push(2);
myStack.push(3);
console.log(myStack);
console.log(myStack.pop());
console.log(myStack);

var myQueue = [];
myQueue.push(1);
myQueue.push(2);
myQueue.push(3);
myQueue.unshift(0); //to add element in the front of the array 
console.log(myQueue);       
console.log(myQueue.shift());

var myArray = [0,1,2,3,4,5,6,7,8,9];
var splice = myArray.splice(3,5); // to remove 5 elements from myArray from index 3 

console.log(splice);        // will print out 3,4,5,6,7
console.log(myArray);       // will print out 0,1,2,8,9

console.log("1" == 1); // true
console.log("1" === 1); // false

var Person = {
    name : " Saundarya ",
    title : "Keshari"
}
Person.age=25;
Person["Salary"]=200000000000000;
for( var i in Person)
{
    if(Person.hasOwnProperty(i))
    console.log(i+" "+Person[i]);
}
function greet(name)
{
    return "Hello " + name + "!";
}

console.log(greet("Eric")); 
// confirm("Hi!");
// prompt("Bye!");
// alert("Hello");

var callback= function(){
    console.log("HELLO");
}

setTimeout(callback,3000);

function callto(){
    console.log("NOW");
}

setTimeout(callto,2000);

const sum = (a,b) => "The sum is "+(a+b);

console.log(sum(4,6));

let x = 10;

if (x > 5) {
  var y = 20;
  console.log(y); // 20
} //let makes the variable scope blocked else it is not , interesting !

console.log(y);

