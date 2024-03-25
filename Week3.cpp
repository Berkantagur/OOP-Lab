#include <iostream>
using namespace std;

int main()
{

    int array[10];
    int evenCount = 0;
    int oddCount = 0;

    // Input numbers
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Value for " << i << ": ";
        cin >> array[i];
    }

    // Count even and odd numbers
    for (int i = 0; i < 10; i++)
    {

        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // Display result of even and odd numbers
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}