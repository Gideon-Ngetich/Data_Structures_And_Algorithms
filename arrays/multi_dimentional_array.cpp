#include<iostream>

using namespace std;

int main()
{
    //initializing the rows and colums of the array
    int ROWS = 3;
    int COLS = 3;
    int arr[ROWS][COLS];

    cout << "Enter the values of the array" << endl;

    //Loop to input the values
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << "Array[" << i + 1 << "][" << j + 1 << "]";
            cin >> arr[i][j];
        }
    }

    cout << "The values of the array are: " << endl;

    //Loop to display the values
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
        {
            cout << "Array[" << i  << "][" << j << "]" << arr[i][j] << endl;
        }
    }

    return 0;
}