#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    cout << "Задание 1.\n";
    cout << "\n";
    cout << "Пользователь вводит с клавиатуры время в секундах. Необходимо написать\n";
    cout << "программу, которая переведет введенные пользователем секунды в часы, минуты,\n";
    cout << "секунды и выводит их на экран.\n";
    cout << "\n";
    cout << "Решение для задания № 1:\n";
    cout << "\n";
    int a, sec, god, hv;
    cout << "Введите \"a\" (секунды) = ";
    cin >> a;
    cout << "\n";
    sec = a % 60;
    hv = a / 60 % 60;
    god = a / 3600 % 24;
    cout << "\t\t" << god / 10 << god % 10 << ":" << hv / 10 << hv % 10 << ":" << sec / 10 << sec % 10 << endl;
    cout << "\n";
    cout << "или вот так (не совсем понял в каком виде нужно выводить):" << endl;
    cout << "\n";
    cout << "\t" << god << " часов, " << hv << " минут(ы), " << sec << " секунд(ы). " << endl;
    cout << "\n";
}
