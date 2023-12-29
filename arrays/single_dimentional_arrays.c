#include<stdio.h> //Standard input output library
#define MAX_SIZE 100 //Maximum size of the array

int main()
{
    int arr[MAX_SIZE];
    int size;

    //Asks for user defined size of the array
    printf("Enter the size of the array \n");
    scanf("%d", &size);

    //if statement to chech the validity of array size
    if(size > 0 && size <= MAX_SIZE )
    {
        printf("Enter the values of the array \n");

        //Loop to input the valus of the array
        for(int i = 0; i < size; i++)
        {
            printf("Array[%d]: ", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("The valuse of the array are: \n");

        //Loop to display the values of the array
        for(int i = 0; i < size; i++)
        {
            printf("Array[%d]: %d\n", i, arr[i]);
        }
    }else
    {
        printf("Enter a valid array size");
    }


    return 0;
}