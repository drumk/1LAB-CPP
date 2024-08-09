#include <iostream>
#include <cmath>
#include <math.h>

int main()
{
    float x, a, b, c;
    double y;
    int p;
    setlocale(0, "Russian");
    std::cout << "Введите X: ";
    std::cin >> x;
    std::cout << "Введите A: ";
    std::cin >> a;
    std::cout << "Введите B: ";
    std::cin >> b;
    std::cout << "Введите C: ";
    std::cin >> c;
    p = 0;
    if (x > 3)
    {
        y = a + b * x + pow(c * x, 2);
    }
    else if (x >= 2)
    {
        y = pow((a * sin(x)), 2);
    }
    else if (x >= 0 && x < 2)
    {
        if (a + b * x < 0)
        {
            p = 1;
        }
        else
        {
            y = sqrt(a + b * x);
        }
    }
    else if (x >= -2 && x < 0)
    {
        y = a * log(abs(x));
    }
    else
    {
        y = (pow(a * x, 4) + pow(b * x, 4) / 4);
    }
    if (p == 1)
    {
        std::cout << "Результат не может быть получен. Корень из отрицательного числа." << "\n";
    }
    else
    {
        std::cout << "Y=" << y << "\n";
    }
    system("pause");
}
