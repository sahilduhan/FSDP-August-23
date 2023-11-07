let quote = document.querySelector('.quote');
let authorName = document.querySelector('.authorName');

// fetch the api using the end point

const apiEndPoint = 'https://api.quotable.io/random';

function fetchAPI () {
    fetch(apiEndPoint)
    .then(response => {
        let data = response.json();
        return data;
        // return newData;
    }).then(data => {
        console.log(data);
        let newData = JSON.stringify(data);
        console.log(newData);
        // kaam krna hai
        quote.innerText = `${data.content}`;
        authorName.innerText = `${data.author}`;
    }).catch(error =>{
        console.log(error);
    })
}


// let arr = {
//     'name':"sahil",
//     'age': 19,
// }

// let val = JSON.stringify(arr);
// 
// console.log(val)


// async function randomQuote() {
//     const response = await fetch('https://api.quotable.io/random')
//     const quote = await response.json()
//     console.log(quote.content)
//     console.log(`- ${quote.author}`)
// }


window.addEventListener('load',fetchAPI())