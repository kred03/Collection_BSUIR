#include <iostream>
#include <cmath>

int main() {
    double a, b, h;
    std::cout << "Введите начальное значение диапазона a: ";
    std::cin >> a;
    std::cout << "Введите конечное значение диапазона b: ";
    std::cin >> b;
    std::cout << "Введите шаг h: ";
    std::cin >> h;

    double max_y = -INFINITY;
    double min_y = INFINITY;
    int i = 1;

    std::cout << "№\t x\t y\n";
    for (double x = a; x <= b; x += h) {
        double y = (2 * std::sin(x)) / std::pow((1 - x), 2);
        std::cout << i << "\t" << x << "\t" << y << "\n";

        if (y > max_y) {
            max_y = y;
        }
        if (y < min_y) {
            min_y = y;
        }
        i++;
    }

    std::cout << "Максимальное значение функции y: " << max_y << "\n";
    std::cout << "Минимальное значение функции y: " << min_y << "\n";

    return 0;
}
