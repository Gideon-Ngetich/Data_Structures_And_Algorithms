#include<iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array \n";
    cin >> size;

    int arr[size];

    cout << "Enter the values of the array \n";

    for(int i = 0; i < size; i++)
    {
        cout << "Array[" << i + 1 << "]" << endl;
        cin >> arr[i];
    }

    cout << "The values of the array are \n";

    for(int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: " << arr[i] << endl;
    }

    return 0;
}