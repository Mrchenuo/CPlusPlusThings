//
// Created by nuo_nuaa on 2022/4/20.
//

// source1.cpp
#include<iostream>
using namespace std;

extern void sayHello();
static const char* msg = "Hello World!\n";
int main()
{
    sayHello();
    return 0;
}

