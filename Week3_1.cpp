// Bubble Sort with a function in C++
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size);

int main()
{
    int arr[10];
    int i;

    // Input numbers from user
    for (i = 0; i < 10; i++)
    {
        cout << "Enter Value for " << i << ": ";
        cin >> arr[i];
    }

    // Call bubble sort function to sort the array
    bubbleSort(arr, 10);

    // Display sorted array
    cout << "Sorted array in ascending order:\n";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " - ";
    }
    cout << endl;

    return 0;
}

void bubbleSort(int array[], int size)
{

    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            { // Swap elements 
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}