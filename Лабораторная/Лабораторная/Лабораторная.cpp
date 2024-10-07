// Лабораторная.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    // Задание 1
    {
        cout << sizeof(int) << " "
            << sizeof(short int) << " "
            << sizeof(long int) << " "
            << sizeof(float) << " "
            << sizeof(double) << " "
            << sizeof(long double) << " "
            << sizeof(char) << " "
            << sizeof(bool) << "\n";
    }

    // Задание 2
    setlocale(0, "");
    int a;
    cin >> a;
    unsigned int mask = 1 << sizeof(int) * 8 - 1;
    for (int i = 0; i <= (sizeof(int) * 8 - 1); i++){
        putchar(mask & a ? '1' : '0');
        mask >>= 1;
    }
    cout << endl;
    // Задание 3
    union {
        float f;
        int fi;
    };

    cin >> f;
 
    mask = 1 << sizeof(float) * 8 - 1;
    for (int i = 0; i <= (sizeof(float)*8 - 1); i++) 
    {
        putchar(mask& fi ? '1' : '0');
        if (i == 0  or i == 8) {
            cout << " ";
        }
        mask >>= 1;
    }
    cout << endl;
    // Задание 4
    union {
        double number;
        unsigned char bytes[sizeof(double)];
    };

    cin >> number;

    for (int i = sizeof(double) - 1; i >= 0; --i){
        mask = 1 << sizeof(char) * 8 - 1;
        for (int j = 0; j <= (sizeof(char) * 8 - 1); j++)
        {
            putchar(mask & bytes[i] ? '1' : '0');
            if ((i == 6 and j == 3) or (i == 7 and j == 0)){
                cout << " ";
            }
            mask >>= 1;
        }
    }
    cout << endl;
    return 0;
}
