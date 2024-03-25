#include <iostream>
using namespace std;

void maxNumber(int array[3][3]) {
    int maxNumber = array[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] > maxNumber){
                maxNumber = array[i][j];
            }
        }
    }
    cout << "Maximum number: " << maxNumber << endl;
}

void minNumber(int array[3][3]) {
    int minNumber = array[0][0];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (array[i][j] < minNumber){
                minNumber = array[i][j];
            }
        }
    }
    cout << "Minimum number: " << minNumber << endl;
}

int main() {

    int arr[3][3];
    int i, j;

    // Input numbers from user for the 3*3 array
    cout << "Enter values for the 3*3 array matrices:\n";

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output the 3*3 array
    cout << "The 3*3 array is:\n";
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call the functions
    maxNumber(arr);
    minNumber(arr);

    return 0;
}