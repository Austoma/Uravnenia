#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, tol, c;
    cout << "Введите границ интервала и точность: ";
    cin >> a >> b >> tol;
    if (((a * a / 10) - (a * log(a))) * ((b * b / 10) - (b * log(b))) >= 0)
    {
        cout << "Ошибка: функция должна иметь разные знаки на концах интервала.";
    }
    while ((b - a) >= tol)
    {
        c = (a + b) / 2;
        if (((c * c / 10) - (c * log(c))) == 0.0)
        {
            break;
        }
        if (((c * c / 10) - (c * log(c))) * ((a * a / 10) - (a * log(a))) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        cout << "Промежуточное значение корня: " << c << endl;
    }
    cout << "Корень: " << c << endl;
    return 0;
}
