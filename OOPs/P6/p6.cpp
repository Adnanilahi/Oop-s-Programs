#include <iostream>

using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator+=(Complex c)
    {
        real += c.real;
        img += c.img;
        return *this;
    }
    Complex operator-=(Complex c)
    {
        real -= c.real;
        img -= c.img;
        return *this;
    }
    Complex operator*=(Complex c)
    {
        int r = real;
        real = real * c.real - img * c.img;
        img = r * c.img + img * c.real;
        return *this;
    }
    Complex operator/=(Complex c)
    {
        int r = real;
        real = (real * c.real + img * c.img) / (c.real * c.real + c.img * c.img);
        img = (img * c.real - r * c.img) / (c.real * c.real + c.img * c.img);
        return *this;
    }
    friend ostream &operator<<(ostream &out, Complex &c);
};

ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << " + " << c.img << "i";
    return out;
}


int main()
{
    Complex C1(3, 4), C2(5, 6);

    cout << "C1 = " << C1 << endl;
    cout << "C2 = " << C2 << endl;

    C1 += C2;
    cout << endl
         << "C1 += C2 = " << C1 << endl;

    C1 -= C2;
    cout << endl
         << "C1 -= C2 = " << C1 << endl;

    C1 *= C2;
    cout << endl
         << "C1 *= C2 = " << C1 << endl;

    C1 /= C2;
    cout << endl
         << "C1 /= C2 = " << C1 << endl;
}