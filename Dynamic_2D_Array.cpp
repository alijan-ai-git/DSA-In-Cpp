#include <iostream>
using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> columns;

    // Create rows
    int **arr = new int *[rows];

    // Create columns for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[columns];
    }

    // Input elements
    cout << "Enter elements:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "enter element at index [" << i << "] [" << j << "] =";
            cin >> arr[i][j];
        }
    }

    // Display array
    cout << "2D Array:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
    //	Create a dynamic 2D array by taking rows and columns from the user.
    //	Input the elements and calculate the sum of all elements.
}
