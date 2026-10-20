#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите операцию (+, -, *, /): ";
    std::cin >> operation;

    std::cout << std::fixed << std::setprecision(2);

    switch (operation) {
        case '+':
            std::cout << "Результат: " << a + b << "\n";
            break;
        case '-':
            std::cout << "Результат: " << a - b << "\n";
            break;
        case '*':
            std::cout << "Результат: " << a * b << "\n";
            break;
        case '/':
            if (b == 0) {
                std::cout << "Ошибка: деление на ноль!\n";
            } else {
                std::cout << "Результат: " << a / b << "\n";
            }
            break;
        default:
            std::cout << "Неизвестная операция\n";
            break;
    }

    return 0;
}