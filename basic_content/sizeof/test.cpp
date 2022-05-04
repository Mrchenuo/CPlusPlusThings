//
// Created by nuo_nuaa on 2022/5/3.
//
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class c;

struct A
{
    char a; //内存位置: [0]
    double b;// 内存位置: [8]...[15]
    int c; // 内存位置: [16]...[19]　　----　　规则1
}; // 内存大小：sizeof(A) = (1+7) + 8 + (4+4) = 24, 补齐[20]...[23]　　----　　规则3


struct B
{
    int a;// 内存位置: [0]...[3]
    A b;   // 内存位置: [8]...[31]　　----　　规则2
    char c;// 内存位置: [32]
};// 内存大小：sizeof(B) = (4+4) + 24 + (1+7) = 40, 补齐[33]...[39]

class C
{
    char a; //内存位置: [0]

    int c; // 内存位置: [16]...[19]　　----　　规则1
}; // 内存大小：sizeof(A) = (1+7) + 8 + (4+4) = 24, 补齐[20]...[23]　　----　　规则3


class D
{
    int a;// 内存位置: [0]...[3]
    C b;   // 内存位置: [8]...[31]　　----　　规则2
    char c;// 内存位置: [32]
    double d;// 内存位置: [8]...[15]
};// 内存大小：sizeof(B) = (4+4) + 24 + (1+7) = 40, 补齐[33]...[39]


int main()
{

    cout << "size of double:" << sizeof(double) << endl;
    cout << "size of int:" << sizeof(int) << endl;
    cout << "size of char:" << sizeof(char) << endl;
    cout << "size of short:" << sizeof(short) << endl;

    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(C) << endl;
    cout << sizeof(D) << endl;
    return 0;
}
