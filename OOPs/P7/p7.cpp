#include <iostream>

#define USD_TO_INR 80
using namespace std;

class Dollar;
class Rupee
{
    double val;

public:
    Rupee(double v = 0)
    {
        val = v;
    }
    Rupee(Dollar &d);
    double getVal() const { return val; }
};
class Dollar
{
    double val;

public:
    Dollar(double v = 0)
    {
        val = v;
    }
    Dollar(Rupee &r);
    double getVal() const { return val; }
};

// rupee to dollar constructor
Rupee::Rupee(Dollar &d)
{
    val = d.getVal() * USD_TO_INR;
}

// dollar to rupee constructor
Dollar::Dollar(Rupee &r)
{
    val = r.getVal() / USD_TO_INR;
}


int main()
{
    double rupeeVal;
    cout << "Enter the value in Rs: ";
    cin >> rupeeVal;
    Rupee r1(rupeeVal);
    Dollar d1 = r1;
    cout << "The value in $ is: " << d1.getVal() << endl;
    cout << endl;
    double dollarVal;
    cout << "Enter the value in $: ";
    cin >> dollarVal;
    Dollar d2(dollarVal);
    Rupee r2 = d2;
    cout << "The value in Rs is: " << r2.getVal() << endl;
    return 0;
}