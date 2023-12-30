#include<stdio.h>
#define MAX_SIZE 100

//stack initialization 
int stack[MAX_SIZE];
int top = -1;

//function to check if the stack is full
int isFull(){
    return top == MAX_SIZE -1;
}

//function to check if the stack is empty
int isEmpty(){
    return top == -1;
}

//function to push the values into the stack
void push(int value){
    if(isFull()){
        printf("The stack is full \n");
    }else{
        top++;
        stack[top] = value;
    }
}

//function to display the values of the stack
void display(){
    int i;
    for(i = top; i > -1 ; i--){
        printf("%d \n", stack[i]);
    }
}

//function to pop the top value of the stack
void pop(){
    if(isEmpty()){
        printf("The stack is empty nothing to pop \n");
    }else{
        printf("Value poped is %d", stack[top]);
        top--;
    }
}

int main(){
    int choice, value;

    //Loop to give the user an option to choose from
    do{
        printf("\n Stack operations \n");
        printf("1: Push operation \n");
        printf("2: Pop operation \n");
        printf("3: Display stack \n");
        printf("4: Exit \n");
        printf("Select option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter a value to be pushed \n");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting stack operation \n");
                break;
            default:
                printf("Invalid choicce \n");
        }
    }while(choice != 4);

    return 0;
}
