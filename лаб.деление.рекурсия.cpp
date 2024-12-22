#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

// Заданная функция
double f(double x) {
    return (x * x) / 10 - x * log(x);
}

// Функция для рекурсивного решения методом половинного деления
double с(double left, double right, double tol) {
    double mid = (left + right) / 2;
    double f_left = f(left);
    double f_mid = f(mid);
    cout << "Промежуточное значение: " << mid << endl;

    // Проверяем, нашли ли мы корень
    if (fabs(f_mid) < tol) 
    {
        return mid;
    }
    // Проверяем, в какой половине находится корень
    if (f_left * f_mid < 0) 
    {
        // Корень находится между left и mid
        return с(left, mid, tol);
    } else 
    {
        // Корень находится между mid и right
        return с(mid, right, tol);
    }
}

int main() 
{
    setlocale(LC_ALL, "rus");
    double left, right, tol;  
    cout << "Введите границ интервала  и точность: " << endl;
    cin >> left >> right >> tol;
    double kor = с(left, right, tol);
    cout << "Найденный корень: " << kor << endl;
    return 0;
}
