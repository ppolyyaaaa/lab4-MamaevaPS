#include <iostream>
#include <windows.h> // ДОБАВЛЕНО: для русского языка

int main() {
    // ДОБАВЛЕНО: настройка кодировки UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double month; 
    std::cout << "Введите номер месяца: ";

    if (!(std::cin >> month)) {
        std::cout << "Ошибка: нужно ввести число!\n";
        return 0; 
    }

    if (month < 1 || month > 12 || month != (int)month) {
        std::cout << "Ошибка: номер месяца - целое число от 1 до 12\n";
    }
    else if (month == 12 || month == 1 || month == 2) {
        std::cout << "Зима\n";
    }
    else if (month >= 3 && month <= 5) {
        std::cout << "Весна\n";
    }
    else if (month >= 6 && month <= 8) {
        std::cout << "Лето\n";
    }
    else {
        std::cout << "Осень\n";
    }

    return 0; 
}