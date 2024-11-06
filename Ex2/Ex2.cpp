
#include <iostream>

using namespace std;

int main()
{
    /*8. Визначити адресу найбільшого числа та найменшого числа у введеному векторі дійсних
      чисел.Порахувати кількість нулів в заданому векторі.*/

    const int size = 5;
    float arr[size];
    cout << "Enter value of array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int count = 0;
    float max = arr[0], min = arr[0];
    float* addrMinValue = arr, *addrMaxValue = arr;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) 
        {
            max = arr[i];
            addrMaxValue = &arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
            addrMinValue = &arr[i];
        }

        if (arr[i] == 0)
        {
            count++;
        }
    }

    cout << "Max value  : " << max << ", addr: " << addrMaxValue << "(" << *addrMaxValue << ")" << endl;
    cout << "Min value  : " << min << ", addr: " << addrMinValue << "(" << *addrMinValue << ")" << endl;
    cout << "Count zero : " << count << endl;

    system("pause");

}

