let multiarr = []; //array initialization

//row and colunmn input
let rows = parseInt(prompt("Enter number of rows"));
let cols = parseInt(prompt("Enter number of columns"));

//loop to enter the array values
for(let i = 0;i < rows;i++){
    multiarr[i] = []; //creating an empty array for each row
    for(let j = 0; j< cols; j++){
        let userinput = prompt("Enter the values of the array");
        multiarr[i][j] = userinput;
    }
}
console.log(multiarr);

