#include <iostream>
#include <string>

using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Base constructor" << endl;
    }
    virtual ~Base()
    {
        cout << "Base destructor" << endl;
    }
    virtual void pureVirtualFunc() = 0;
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived constructor" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived destructor" << endl;
    }
    void pureVirtualFunc() override
    {
        cout << "Pure Virtual Function" << endl;
    }
    friend ostream &operator<<(ostream &os, const Derived &d);
};

ostream &operator<<(ostream &os, const Derived &d)
{
    os << "Overloading through the friend function" << endl;
    return os;
}


int main()
{
    // pure virtual function
    Base *B1 = new Derived();
    B1->pureVirtualFunc();

    // pointer to derived class
    Derived *D1 = new Derived();
    D1->pureVirtualFunc();

    // virtual destructor
    Derived *D2 = new Derived();
    Base *B2 = D2;
    delete B2;

    // overloading through friend function
    Derived D3;
    cout << D3 << endl;
}