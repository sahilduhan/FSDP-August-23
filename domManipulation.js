// let element = document.querySelector('.container');

// let element = document.getElementById('container');

// let element = document.getElementsByTagName('div');

// let element = document.getElementsByClassName('container');


// element[0].style.backgroundColor = 'pink'

// let div = document.createElement('div');

// Date();

let heading = document.getElementsByTagName('h1');

let currentTime = new Date();

console.log(currentTime)

// console.log(heading);

let todaysDay = currentTime.getDate();
let month = currentTime.getMonth();
let year = currentTime.getFullYear();

heading[0].innerHTML = todaysDay + ' : ' + month + ' : ' + year;


// div.innerHTML = "hello there, hi i am using whatsapp";
// document.body.appendChild(div);

// console.log(element);
