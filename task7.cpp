#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;
    std::cout << "Введите сторону a: ";
    std::cin >> a;
    std::cout << "Введите сторону b: ";
    std::cin >> b;
    std::cout << "Введите сторону c: ";
    std::cin >> c;

    // Проверка условия существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Проверка типа треугольника
        if (a == b && b == c) {
            std::cout << "Треугольник равносторонний\n";
        } else if (a == b || a == c || b == c) {
            std::cout << "Треугольник равнобедренный\n";
        } else {
            std::cout << "Треугольник разносторонний\n";
        }
    } else {
        std::cout << "Треугольник с такими сторонами не существует\n";
    }

    return 0;
}