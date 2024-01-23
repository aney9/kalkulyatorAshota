// kalkulyator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
int main()
{
    do
    {
        int vybor;
        setlocale(LC_ALL, "Russian");
        cout << "\nВыберите действие:\n1. Сложение\n2. Вычитание\n3. Частное\n4. Произведение\n5. Возведение в степень\n6. Нахождение квадратного корня\n7. Нахождение 1 процента\n8. Найти факториал\n9. Выйти\n";
        cin >> vybor;
        if (vybor == 1)
        {
            float a;
            cout << "Введите первое число:";
            cin >> a;
            float b;
            cout << "Введите второе число";
            cin >> b;
            a += b;
            cout << a;
            continue;
        }
        if (vybor == 2)
        {
            float a;
            cout << "Введите первое число:";
            cin >> a;
            float b;
            cout << "Введите второе число";
            cin >> b;
            a -= b;
            cout << a;
            continue;
        }
        if (vybor == 3)
        {
            float a;
            cout << "Введите первое число:";
            cin >> a;
            float b;
            cout << "Введите второе число";
            cin >> b;
            a /= b;
            cout << a;
            continue;
        }
        if (vybor == 4)
        {
            float a;
            cout << "Введите первое число:";
            cin >> a;
            float b;
            cout << "Введите второе число";
            cin >> b;
            a *= b;
            cout << a;
            continue;
        }
        if (vybor == 5)
        {
            float a;
            cout << "Введите первое число:";
            cin >> a;
            float b;
            cout << "Введите степень:";
            cin >> b;
            cout << pow(a, b) << endl;
            continue;
        }
        if (vybor == 6)
        {
            float a;
            cout << "Введите число:";
            cin >> a;
            float b;
            b = sqrt(a);
            cout << b;
            continue;
        }
        if (vybor == 7)
        {
            float a;
            cout << "Введите число:";
            cin >> a;
            float b;
            b = a / 100;
            cout << b;
            continue;
        }
        if (vybor == 8)
        {
            float a;
            cout << "Введите число:";
            cin >> a;
            int i;
            float result;
            result = 1;
            for (i = 1; i <= a; i++)
            {
                result = result * i;
            }
            cout << result;
            continue;
        }
        if (vybor == 9)
        {
            break;
        }
    } while (true);
}

