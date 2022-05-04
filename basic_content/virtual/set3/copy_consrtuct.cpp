#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base created" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived created" << endl;
    }

    Derived(const Derived &rhs)
    {
        cout << "Derived created by deep copy" << endl;
    }

    ~Derived()
    {
        cout << "Derived destroyed" << endl;
    }
};

int main()
{
    Derived s1;

    Derived s2 = s1; // Compiler invokes "copy constructor"
    // Type of s1 and s2 are concrete to compiler 

    // How can we create Derived1 or Derived2 object 
    // from pointer (reference) to Base class pointing Derived object? 
    Base *b1 = &s1;
    return 0;
} 

