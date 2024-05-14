var nextButton = document.getElementById("nextButton");
var previousButton = document.getElementById("previousButton");
var backgroundImage = document.getElementById("backgroundImg");
var dataElement = document.querySelector('.data');
var dataBottomTextElement = document.querySelector('.data-bottomtext');
var readMoreElement = document.querySelector('.readMore');

var images = ["../assets/image1.jpg", "../assets/image2.jpg", "../assets/image3.jpg"];
var text = ["MULTIPURPOSE THEME", "LOREM IPSUM", "ALES MAECENAS"];

var currentIndex = 0;

nextButton.addEventListener("click", function () {
    currentIndex++;

    if (currentIndex >= images.length) {
        currentIndex = 0;
    }

    backgroundImage.style.opacity = 0.3;

    setTimeout(function () {
        backgroundImage.src = images[currentIndex];
        backgroundImage.style.opacity = 1;
    }, 300);

    dataElement.textContent = text[currentIndex]

    dataElement.classList.remove("animationDown");
    dataBottomTextElement.classList.remove("animationUp");
    readMoreElement.classList.remove("animationRight");

    setTimeout(function () {
        dataElement.classList.add("animationDown");
        dataBottomTextElement.classList.add("animationUp");
        readMoreElement.classList.add("animationRight");
    }, 10);
});

previousButton.addEventListener("click", function () {
    currentIndex--;

    if (currentIndex < 0) {
        currentIndex = images.length - 1;
    }

    backgroundImage.style.opacity = 0.7;

    setTimeout(function () {
        backgroundImage.src = images[currentIndex];
        backgroundImage.style.opacity = 1;
    }, 300);

    dataElement.textContent = text[currentIndex]

    dataElement.classList.remove("animationDown");
    dataBottomTextElement.classList.remove("animationUp");
    readMoreElement.classList.remove("animationRight");

    setTimeout(function () {
        dataElement.classList.add("animationDown");
        dataBottomTextElement.classList.add("animationUp");
        readMoreElement.classList.add("animationRight");
    }, 10);
});

nextButton.addEventListener("mouseover", function () {
    nextButton.style.opacity = 1;
});

nextButton.addEventListener("mouseout", function () {
    nextButton.style.opacity = 0;
});

previousButton.addEventListener("mouseover", function () {
    previousButton.style.opacity = 1;
});

previousButton.addEventListener("mouseout", function () {
    previousButton.style.opacity = 0;
});

backgroundImage.addEventListener("mouseover", function () {
    previousButton.style.opacity = 1;
    nextButton.style.opacity = 1;
});

backgroundImage.addEventListener("mouseout", function () {
    previousButton.style.opacity = 0;
    nextButton.style.opacity = 0;
});

window.addEventListener("load", function () {
    dataElement.classList.add("animationDown");
    dataBottomTextElement.classList.add("animationUp");
    readMoreElement.classList.add("animationRight");
});