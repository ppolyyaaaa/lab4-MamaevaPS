#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int age;
    std::cout << "Введите возраст: ";
    std::cin >> age;

    // Проверяем от меньшего к большему, как сказано в подсказке
    if (age < 0) {
        std::cout << "Некорректный возраст\n";
    } 
    else if (age <= 12) {
        std::cout << "Ребёнок\n";
    } 
    else if (age <= 17) {
        std::cout << "Подросток\n";
    } 
    else if (age <= 64) {
        std::cout << "Взрослый\n";
    } 
    else {
        std::cout << "Пожилой\n";
    }

    return 0;
}
