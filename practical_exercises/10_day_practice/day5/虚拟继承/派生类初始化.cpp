#include <iostream>
using namespace std;
class A {
public:
    int a;
public: 
    A(int x) {
        a=x;
        cout<<"Virtual Bass A..."<<endl; 
    }
}; 
class B:virtual public A {
public: 
    B(int i):A(i){ cout<<"Virtual Bass B..."<<endl; }
};
class C:virtual public A{
    int x;
public:
    C(int i):A(i){
        cout<<"Constructing C..."<<endl;
        x=i; 
    }
};
class ABC:public C, public B {
public: 
    //虚基类由最终派生类初始化 
    ABC(int i,int j,int k):C(i),B(j),A(k) //L1，这里必须对A进行初始化
        { cout<<"Constructing ABC..."<<endl;
        cout<<A::a<<endl;}
}; 
int main(){
    ABC obj(1,2,3);
    system("pause");
    return 0;
}

/*Virtual Bass A...
Constructing C...
Virtual Bass B...
Constructing ABC...
3*/
//在没有虚拟继承的情况下，每个派生类的构造函数只负责其直接基类的初始化。
// 但在虚拟继承方式下，虚基类则由最终派生类的构造函数负责初始化
//所以这里A::a为3，由类ABC初始化
