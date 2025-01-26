#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
#include <io.h>
#include <vector>
#include <fstream>
#include <cassert>


// Создать базовый класс «Домашнее животное» и производные
//классы «Собака», «Кошка», «Попугай», «Хомяк».С помощью конструктора установить имя каждого животного и его характеристики.
//Реализуйте для каждого из классов функции :
//Sound – издает звук животного(пишем текстом в консоль);
//Show – отображает имя животного;
//Type – отображает название его подвида.
using namespace std;

class Home_Animal
{
public:

    string Title;

    Home_Animal(string Title) :Title{ Title } {}

    virtual void speak() = 0;
    virtual void show() = 0;
    virtual void type() = 0;
};




class Dog : public Home_Animal
{
public:
    Dog(string Title) : Home_Animal(Title) {};

    virtual void speak() {
        cout << Title << " Говорит " << "Гав-Гав" << endl;
    }

    virtual void show() {
        cout << Title << " Собака " << endl;
    }
    virtual void type() {
        cout << Title << " из семейства собачьих " << endl;
    }

};

class Cat : public Home_Animal
{
public:
    Cat(string Title) : Home_Animal(Title) {};
    virtual void speak() {
        cout << Title << " Говорит " << "Мур-Мур" << endl;
    }

    virtual void show() {
        cout << Title << " Кошка " << endl;
    }

    virtual void type() {
        cout << Title << " из семейства кошачьих " << endl;
    }

};

class Parrot : public Home_Animal
{
public:
    Parrot(string Title) : Home_Animal(Title) {};
    virtual void speak() {
        cout << Title << " Говорит " << "Гррриша  Пррривет!!!" << endl;
    }

    virtual void show() {
        cout << Title << " Попугай " << endl;
    }
    virtual void type() {
        cout << Title << " из семейства птичьих " << endl;
    }

};

class Hamster : public Home_Animal
{
public:
    Hamster(string Title) : Home_Animal(Title) {};
    virtual void speak() {
        cout << Title << " Говорит " << "Хрум-хрум" << endl;
    }

    virtual void show() {
        cout << Title << " Хомяк " << endl;
    }
    virtual void type() {
        cout << Title << " из семейства грызунов " << endl;
    }

};



int main()
{
    system("chcp 1251 > nul");
    setlocale(LC_ALL, "Rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    Home_Animal* home_animals[4] = { new Dog("Лайма"),
 new Cat("Люси"),
 new Parrot("Арчибальт"),
 new Hamster("Гриша") };


    for (int i = 0; i < 4; i++)
    {
        home_animals[i]->show();
        home_animals[i]->type();
        home_animals[i]->speak();
        cout << endl;
    }
     

}