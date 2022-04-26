//
// Created by nuo_nuaa on 2022/4/20.
//
// source2.cpp
#include <cstdio>
#include <iostream>
#include "string"
extern const char* msg;
//extern const std::string ext;
void sayHello()
{
    printf("%s", msg);
//    std::cout<<ext<<std::endl;
}

class A
{
public:
    static int num;
    static int getNum();
};

int A::num=5;

int A::getNum() {
    return this->num;
}
