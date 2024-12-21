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
        double f = x*x/10 - x*log(x);
        double f1 = x/5 - log(x) - 1;
        x0 = x;
        x = x0 - f/f1;
        cout << "Промежуточное значение: " << x << endl;
    }
    while (fabs(x-x0) >= e);
    cout << "Корень: x = " << x;
    return 0;
}
