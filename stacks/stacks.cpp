#include<iostream>
#define MAX_SIZE 100

using namespace std;

int stack[MAX_SIZE];
int top = -1;

int isFull(){
    return top ==  MAX_SIZE -1;
}

int isEmpty(){
    return top == -1;
}

void push(int value){
    if(isFull()){
        cout << "The stack is full \n";
    }else {
        top++;
        stack[top] = value;
    }
}

void pop(){
    if(isEmpty()){
        cout << "The stack is empty nothing to pop" << endl;
    }else{
        cout << "The value poped is " << stack[top] << endl;
        top--;
    }
}

void display(){
    int i;

    for(i = top; i > -1; i--){
        cout << stack[i] << endl;
    }
}

int main(){
    int choice, value;

    do{
        cout << "Stack operations" << endl;
        cout << "1: Push operation" << endl;
        cout << "2: Pop operation" << endl;
        cout << "3: Display stack" << endl;
        cout << "4: Exit " << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Enter the value to be pushed" << endl;
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4: 
                cout << "Exiting operation" << endl;
                break;
            default:
                cout << "Invalid choice... Try again" << endl;
        }
    }while(choice != 4);

    return 0;
}