
#include <iostream>

using namespace std;



int main()
{
    /*1.Написати програму, яка обчислює суму додатних елементів
        масиву дійсних чисел.Замість індексів використати вказівники
        та адресну арифметику.*/

    const int size = 5;
    float arr[size];

    cout << "Enter value of array: " << endl;
    for (float* i = arr, j = 0; i != arr + size; i++, j++)
    {
        cout << "arr[" << j << "] = ";
        cin >> *(i);
    }
    cout << endl;

    cout << "Result array :" << endl;
    for (float* i = arr; i != arr + size; i++)
    {
        cout << *i << " ";
    }
    cout << endl << endl;

    float dobutok = 1;

    for (float* i = arr; i != arr + size; i++)
    {
        if (*i > 0)
        {
            dobutok *= *i;
        }
    }
    cout << "Dobutok = " << dobutok << endl << endl;

    system("pause");

}

