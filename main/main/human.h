#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    int id;
    string lastName;
    string firstName;
    string middleName;
    string birthDate;

public:
    // Конструктор с параметрами
    Person(int id, const string& lastName, const string& firstName,
        const string& middleName, const string& birthDate)
        :
        id(id),
        lastName(lastName),
        firstName(firstName),
        middleName(middleName),
        birthDate(birthDate) {
    }

// Конструктор копирования
// other - для передачи обьекта в класс (обьект-источник)
    Person(const Person& other) 
        :
        id(other.id),
        lastName(other.lastName),
        firstName(other.firstName),
        middleName(other.middleName),
        birthDate(other.birthDate) {}


    // Сеттеры и геттеры для всех полей
    void setId(int newId) {
        id = newId;
    }
    int getId() const {
        return id;
    }

    void setLastName(const string& newLastName) {
        lastName = newLastName;
    }
    string getLastName() const {
        return lastName;
    }

    void setFirstName(const string& newFirstName) {
        firstName = newFirstName;
    }
    string getFirstName() const {
        return firstName;
    }

    void setMiddleName(const string& newMiddleName) {
        middleName = newMiddleName;
    }
    string getMiddleName() const {
        return middleName;
    }

    void setBirthDate(const string& newBirthDate) {
        birthDate = newBirthDate;
    }
    string getBirthDate() const {
        return birthDate;
    }

    // Метод для вывода информации о человеке
    void printInfo()
        const
    {
        cout << "ID: " << id << endl;
        cout << "Фамилия: " << lastName << endl;
        cout << "Имя: " << firstName << endl;
        cout << "Отчество: " << middleName << endl;
        cout << "Дата рождения: " << birthDate << endl;
    }
};