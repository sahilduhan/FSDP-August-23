// function handleClick () {
//     console.log('hello cutie');
//     let heading = document.querySelector('#heading');
//     heading.innerHTML = "Hello Princess";
// }

// adding event listner to an html element;

// let container = document.querySelector('.container');

// container.addEventListener('mouseout',handleMouseOut);

// function handleMouseOut () {
//     console.log('hello mouse out activity')
// }

// function handleMouseOver(){
//     console.log('hello 1 2 3')
// }


// let body = document.getElementsByName('body');

// body.addEventListener("load",handleLoading)

// function handleLoading(){
//     console.log('hel')
// }

// window.addEventListener("load", (event) => {
//     console.log("page is fully loaded");
//     console.log(event)
// });

// let formButton = document.getElementById('formButton');

// formButton.addEventListener('click',submitForm);

// function submitForm (event) {
//     event.preventDefault();
//     // console.log('Crime Patrol');

//     let userName = document.getElementById('userName').value;
//     let userEmail = document.getElementById('userEmail').value;
//     let userPhoneNumber = document.getElementById('userPhoneNumber').value;

//     console.log(userName);
//     console.log(userEmail);
//     console.log(userPhoneNumber);

//     if(userName == '' || userName.length > 15) alert("please enter a valid name");

//     // if(userEmail.indexOf == -1) alert("please enter a valid email");

//     if(userPhoneNumber.length > 10 || userPhoneNumber.length < 10) alert("sudhar jaa apshabd");

// }


function displayHello () {
    let todaysDate = new Date();
    let heading = document.getElementById('heading');
    heading.innerText = todaysDate;
}

setInterval(displayHello, 1000);