
#include <iostream>

using namespace std;

int main()
{
    /*За заданим кутом(в градусах) визначити знаки усіх тригонометричних функцій. (Не
      використовувати математичні функції з стандартної бібліотеки).*/

    int degree;
    cout << "Enter the angle measure in degrees : ";
    cin >> degree;
    degree %= 360;

    int signSIN = 0, signCOS = 0, signTG = 0, signCTG = 0;

    if (degree > 0 && degree < 90)
    {
        signSIN = signCOS = signTG = signCTG = 1;
    }
    else if (degree > 90 && degree < 180)
    {
        signSIN = 1;
        signCOS = signTG = signCTG = -1;
    }
    else if (degree > 180 && degree < 270) 
    {
        signSIN = signCOS = -1;
        signTG = signCTG = 1;
    }
    else if (degree > 270 && degree < 360)
    {
        signCOS = 1;
        signSIN = signTG = signCTG = -1;
    }
    else if (degree == 0)
    {
        signCOS = 1;
    }
    else if (degree == 90)
    {
        signSIN = 1;
    }
    else if (degree == 180)
    {
        signCOS = -1;
    }
    else if (degree == 270)
    {
        signSIN = -1;
    }


    if (signSIN > 0)
    {
        cout << "SIN + (Positive)" << endl;
    }
    else if (signSIN < 0)
    {
        cout << "SIN - (Negative)" << endl;
    }
    else
    {
        cout << "SIN - (Sign not defined)" << endl;
    }

    if (signCOS > 0)
    {
        cout << "COS + (Positive)" << endl;
    }
    else if (signCOS < 0)
    {
        cout << "COS - (Negative)" << endl;
    }
    else
    {
        cout << "COS - (Sign not defined)" << endl;
    }

    if (signTG > 0)
    {
        cout << "TG  + (Positive)" << endl;
    }
    else if (signTG < 0)
    {
        cout << "TG  - (Negative)" << endl;
    }
    else
    {
        cout << "TG  - (Sign not defined or not value)" << endl;
    }

    if (signCTG > 0)
    {
        cout << "CTG + (Positive)" << endl;
    }
    else if (signCTG < 0)
    {
        cout << "CTG - (Negative)" << endl;
    }
    else
    {
        cout << "CTG - (Sign not defined or not value)" << endl;
    }

    system("pause");

}

