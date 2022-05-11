//живЊ!!!
#include <iostream>
using namespace std;
class A  {
public:
    int a;
public: 
    A(int i):a(i){ cout<<"Constructing A"<<endl; }
}; 
class B {
public:
    int b;
    B(int i):b(i){ cout<<"Constructing B"<<endl;}
}; 
class B1:virtual public B ,virtual public A{
public: 
    B1(int i):A(i),B(i){ cout<<"Constructing B1"<<endl; }
}; 
class B2:public A,virtual public B {
public: 
    B2(int j):A(j),B(j){ cout<<"Constructing B2"<<endl; }
};
class D: public B1, public B2 {
public:
    D(int m,int n, int o, int p): B1(m),B2(n),A(o),B(p)
    {
        cout<<"Constructing D"<<endl;
        cout<<A::a<<endl;
        cout<<B::b<<endl;
    }
//    A a;
}; 
    
int main(){
    D d(1,2);
    system("pause");
    return 0;
}

/*
Constructing B
Constructing A
Constructing B1
Constructing A
Constructing B2
Constructing A
Constructing D*/
