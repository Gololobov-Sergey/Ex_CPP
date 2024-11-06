
#include <iostream>
#include<iomanip>

using namespace std;



int main()
{
    const int row = 3, col = 3;
    int arr[row][col];

    cout << "Enter matrix value:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << "Matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;

    int countOdd = 0;
    for (int i = 0; i < row; i++)
    {
        bool isOdd = true;
        for (int j = 0; j < col; j++)
        {
            if (*(*(arr + i) + j) % 2 == 0)
            {
                isOdd = false;
                break;
            }
        }
        if (isOdd)
        {
            cout << "Row " << i + 1 << ", all value is odd." << endl;
            countOdd++;
        }
        else
        {
            for (int j = 0; j < col / 2; j++)
            {
                int temp = arr[i][j];
                arr[i][j] = arr[i][col - j - 1];
                arr[i][col - j - 1] = temp;
            }
        }
    }
    if (countOdd == 0)
    {
        cout << "Rows is all odd value is not define" << endl;
    }
    cout << endl;

    cout << "Result Matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << setw(3) << arr[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;

    system("pause");

}

