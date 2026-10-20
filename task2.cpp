#include <iostream>
#include <algorithm> // Для std::max
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    // Находим максимум из трех чисел
    double maximum = std::max({a, b, c});

    std::cout << "Максимум: " << maximum << "\n";

    return 0;
}