#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double x0, x;
    double e = 0.000001;
    cout << "Введите примерное значение корня: " << endl;
    cin >> x;
    do
    {
        x0 = x;
        x = x0 + 1.25*(0.1*x0*x0-x*log(x0));
        cout << "Промежуточное значение: " << x << endl;
    }
    while (fabs(x-x0) >= e);
    cout << "Корень: x = " << x;
    return 0;
}
