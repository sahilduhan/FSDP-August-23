let color1 = document.getElementById('color-1');
let color2 = document.getElementById('color-2');
let code = document.querySelector('.code');
let btn = document.querySelector('.btn');
let infoElement = document.querySelector('.info');

function getHexCode () {
    const randomColor = "#" + Math.floor(Math.random() * 16777215).toString(16);
    let hexColor = `${randomColor}`
    return hexColor;
}

function updateBackground() {
    color1 = getHexCode();
    color2 = getHexCode();
    console.log(color1);
    console.log(color2);
    code.innerText = `background: linear-gradient(45deg, ${color1},${color2})`;
    document.body.style.background = `linear-gradient(45deg, ${color1},${color2})`;
}

window.addEventListener('click',updateBackground());