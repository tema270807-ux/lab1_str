#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toUpperCase(const string& s)
{
    string result = s;

    for (size_t i = 0; i < result.size(); i++)
    {
        result[i] = toupper(result[i]);
    }

    return result;
}

string toLowerCase(const string& s)
{
    string result = s;

    for (size_t i = 0; i < result.size(); i++)
    {
        result[i] = tolower(result[i]);
    }

    return result;
}

int main()
{
    cout << "Программа обработки строки" << endl;
    cout << "Запуск программы" << endl;
    string s;
    int choice;

    cout << "Лабораторная работа №1" << endl;
    cout << "Работа со строками" << endl;
    cout << "--------------------------------" << endl;

    cout << "Введите строку: ";
    getline(cin, s);

    cout << endl;
    cout << "Выберите действие:" << endl;
    cout << "1 - перевести строку в ВЕРХНИЙ регистр" << endl;
    cout << "2 - перевести строку в НИЖНИЙ регистр" << endl;
    cout << "Ваш выбор: ";

    cin >> choice;

    cout << endl;

    if (choice == 1)
    {
        cout << "Обработка строки..." << endl;
        cout << "Результат: " << toUpperCase(s) << endl;
    }
    else if (choice == 2)
    {
        cout << "Обработка строки..." << endl;
        cout << "Результат: " << toLowerCase(s) << endl;
    }
    else
    {
        cout << "Ошибка: неверный выбор." << endl;
    }

    return 0;
}