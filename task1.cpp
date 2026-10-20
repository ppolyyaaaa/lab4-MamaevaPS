#include <iostream>
#include <windows.h>

int main() {
    // Включаем русский язык
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int number;
    std::cout << "Введите число: ";
    std::cin >> number;

    // 1. Проверка на чётность
    if (number % 2 == 0) {
        std::cout << "Число " << number << " - чётное\n";
    } else {
        std::cout << "Число " << number << " - нечётное\n";
    }

    // 2. Дополнительно: делится ли на 3
    if (number % 3 == 0) {
        std::cout << "Число делится на 3\n";
    } else {
        std::cout << "Число не делится на 3\n";
    }

    // 3. Дополнительно: знак числа
    if (number > 0) {
        std::cout << "Число положительное\n";
    } else if (number < 0) {
        std::cout << "Число отрицательное\n";
    } else {
        std::cout << "Введён ноль\n";
    }

    return 0;
}