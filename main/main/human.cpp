#include <iostream>
#include "human.h"

using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");
    // Создаем два объекта с разными конструкторами
    Person p1(1, "Иванов", "Иван", "Иванович", "01-01-1990");
    Person p2(p1);  // Копируем первый объект

    // Выводим информацию о первом человеке
    p1.printInfo();


    return 0;
}