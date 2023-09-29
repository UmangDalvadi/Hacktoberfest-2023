const greet = (arg1) => {
    console.log("good morning" + arg1)
}
let sto = setTimeout(greet, 1000, " umang")
// if (prompt("enter time : ") == 'morning') {
//     clearTimeout(sto)
// }

const greet2 = (arg2) => {
    console.log("good night" + arg2)
}
let cto = setInterval(greet2, 2000, " vikash")
// clearInterval(cto)