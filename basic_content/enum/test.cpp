//
// Created by nuo_nuaa on 2022/5/6.
//
#include <iostream>
using namespace std;

enum class Color{
    RED=2,
    YELLOW,
    BLUE
};

class Person{
public:
    Color c1;
    typedef enum {
        BOY = 0,
        GIRL
    }SexType;
    Person(Color c1):c1(c1){}
};

int main()
{
    Color c2 = Color::YELLOW;

    Person p1{c2};
    cout<<static_cast<int>(p1.c1);
    cout<<Person::SexType::GIRL;
    return 0;
}