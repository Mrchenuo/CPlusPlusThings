/**
 * @file static.cpp
 * @brief 静态数据成员
 * 静态数据成员被编译器放在程序的一个global data members中，它是类的一个数据成员，但不影响类的大小。
 * 不管这个类产生了多少个实例，还是派生了多少新的类，静态数据成员只有一个实例。静态数据成员，一旦被声明，就已经存在。
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include<iostream>
//#pragma pack(8)
using namespace std;
class A
{
    public:
        char b{};
        virtual void fun() {};
        static int c;
        static int d;
        static int f;
};

class B
{
public:
    char b{};
};

class C
{
    int d;
};

// B 和 C都是1字节，可能是当类不是空类时，就不存在表示空类的1字节
int main()
{

    /**
     * @brief 16  字节对齐、静态变量不影响类的大小、vptr指针=8
     */
     A a;
    cout<<sizeof(A)<<endl; // 16, 可能是1(char) + 8(vptr) = 9 字节对齐 --> 16
    cout<<sizeof(B)<<endl; // 1
    cout<<sizeof(C)<<endl; // 4

    return 0;
}
