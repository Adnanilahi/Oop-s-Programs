#include <iostream>
#include <string>

using namespace std;
class Media
{
public:
    string title;
    string publication;
    virtual void read();
    virtual void display();
};

class Book : public Media
{
public:
    int pages;
    void read() override;
    void display() override;
};

class Tape : public Media
{
public:
    int time;
    void read() override;
    void display() override;
};

void Media::read()
{
    cout << "Enter the Title of Book: ";
    cin >> title;
    cout << "Enter the Publication: ";
    cin >> publication;
}

void Media::display()
{
    cout << "The Title is: " << title << endl;
    cout << "The Publication is: " << publication << endl;
}

void Book::read()
{
    Media::read();
    cout << "Enter pages: ";
    cin >> pages;
}

void Book::display()
{
    Media::display();
    cout << "Pages: " << pages << endl;
}

void Tape::read()
{
    Media::read();
    cout << "Enter the time: ";
    cin >> time;
}

void Tape::display()
{
    Media::display();
    cout << "Time: " << time << endl;
}

int main()
{
    Media *book = new Book();
    Media *tape = new Tape();

    cout << endl
         << "Enter details of the book" << endl;
    book->read();
    cout << endl
         << "Enter details of the tape" << endl;
    tape->read();
    cout << endl
         << "Details of the book are" << endl;
    book->display();
    cout << endl
         << "Details of the tape are" << endl;
    tape->display();
}