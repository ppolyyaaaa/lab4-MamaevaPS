#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int year;
    std::cout << "Введите год: ";
    std::cin >> year;

    // Условие високосного года: делится на 4 И (не делится на 100 ИЛИ делится на 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " - високосный год\n";
    } else {
        std::cout << year << " - не високосный год\n";
    }

    return 0;
}
