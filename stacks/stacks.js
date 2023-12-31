var stack = [];
var top = -1;

var isFull = function(){
    return top === stack.length - 1;
}

var isEmpty = function(){
    return top === -1;
}

function push(val){
    if(isFull()){
        console.log("The stack is full");
    }else{
        top++;
        stack.push = val;
    }
}

function pop(){
    if(isEmpty()){
        console.log("The stack is empty nothing to push");
    }else{
        console.log("The value to be poped is ${stack[top]}}" );
        top--;
    }
}

console.log(stack);

function stackModule(){
    var choice, value;
    do{
        alert("Select an option 1:Push 2: Pop 3:Exit");
        choice = prompt(parseInt(choice));

        switch(choice){
            case 1:
                prompt("Enter the value to be pushed")
                push(value);
                top++;
                break;
            case 2:
                pop();
                break
            case 3:
                break
            default:
                alert("Invalid choice");
        }
        
        
    }while(choice !== 3);
}
stackModule ();