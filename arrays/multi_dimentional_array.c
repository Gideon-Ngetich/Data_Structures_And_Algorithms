#include<stdio.h>

#define ROWS 3
#define COLS 3

int main()
{  
    //initialize the array
    int arr[ROWS][COLS];

    printf("Enter the valuse of the Array \n");

    //loop to input the value of the rows
    for(int i = 0; i < ROWS; i++)
    {
        //loop to input the values of the colums
        for(int j = 0; j < COLS; j++){
            printf("Array[%d][%d]: ", i + 1,j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The values of the array are: \n");

    //loop to print the value of the array
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++){
            printf("Array[%d][%d]: %d\n", i,j,arr[i][j]);
        }
    }

    return 0;
}
