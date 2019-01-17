#include <iostream>
#include <conio.h>
#include <string>
#include "Catv2.h"
using namespace std;

/* 
    Implementing Getters
*/
unsigned int Catv2::getAge() const
{
    return age;
};
string Catv2::getPrivateVar() const
{
    return privateVar;
};
/* 
    Implementing Setters
*/
void Catv2::setAge(int _age)
{
    age = _age;
};
void Catv2::setPrivateVar(string _owner)
{
    privateVar = _owner;
};

/*
    Implementing Methods
*/
void Catv2::meow()
{
    cout << "Meowww.." << endl;
};
void Catv2::scratch()
{
    cout << privateVar << " scratch scratch.." << endl;
};