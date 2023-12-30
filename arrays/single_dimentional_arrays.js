var size = prompt("Enter the size of thte array");

var arr = [];
arr.length = size;

if(size > 0 && size <= size){
    for(var i = 0; i < size; i++){
        let userInput = prompt("Enter the values of the array");
        arr.push(parseInt(userInput));
    }

    console.log(arr);
    
}else{
    console.log("Invalid array size");
}
