#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string toUpperCase(const string& s)
{
    string result = s;
    for (size_t i = 0; i < result.size(); ++i)
    {
        result[i] = static_cast<char>(toupper(static_cast<unsigned char>(result[i])));
    }
    return result;
}

string toLowerCase(const string& s)
{
    string result = s;
    for (size_t i = 0; i < result.size(); ++i)
    {
        result[i] = static_cast<char>(tolower(static_cast<unsigned char>(result[i])));
    }
    return result;
}

int main()
{
    string s;
    int choice;

    cout << "Лабораторная работа №1" << endl;
    cout << "Работа со строками" << endl;
    cout << "1 - перевести строку в ВЕРХНИЙ регистр" << endl;
    cout << "2 - перевести строку в НИЖНИЙ регистр" << endl;

    cout << "\nВведите строку: ";
    getline(cin, s);

    cout << "Ваш выбор: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Результат: " << toUpperCase(s) << endl;
    }
    else if (choice == 2)
    {
        cout << "Результат: " << toLowerCase(s) << endl;
    }
    else
    {
        cout << "Ошибка: неверный выбор." << endl;
    }

    return 0;
}