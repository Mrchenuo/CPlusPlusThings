//
// Created by nuo_nuaa on 2022/5/11.
//
#include <iostream>
using namespace std;

class A
{
public:
    A()=default;
    int getA() const{return a;}
public:
    int a=1;
protected:
    int b=2;
private:
    int c=3;
};

class B: public A
{
//    B(){
//        this->getA()
//        this->b
//    }
    int getB(){return b;}
};

int main()
{
    B cb;
    cb.
    return 0;
}