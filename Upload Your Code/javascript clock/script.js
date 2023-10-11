// setTimeout(() => {
//     window.addEventListener('load', function () {
//         const loader = document.querySelector('.loader');
//         loader.style.display = 'none';
//     });
// }, 3000);

setInterval(ShowTime, 1000)
function ShowTime() {
    let date = new Date()
    let h = date.getHours();
    let m = date.getMinutes();
    let s = date.getSeconds();
    let d = date.getDate();
    let D = date.getDay();
    let month = date.getMonth();
    let year = date.getYear();
    let a = document.getElementById("clock");
    let days = ["Sunday", "Monday", "Tuesday", "wednesday", "Thursday", "Friday", "Saturday"]
    let mon = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
    document.getElementById("time-div0").innerHTML = h
    document.getElementById("time-div1").innerHTML = m
    document.getElementById("time-div2").innerHTML = s
    document.getElementById("date-div0").innerHTML = days[D] + ","
    document.getElementById("date-div1").innerHTML = d
    document.getElementById("date-div2").innerHTML = mon[month]
    document.getElementById("date-div3").innerHTML = year - 100
    if (h >= 19 || h <= 5) {
        let b = document.getElementsByClassName("time-div")
        for (let i in b) {
            b[i].style.boxShadow = "50px -20px 200px rgb(255, 255, 255) "
        }
    }
}
