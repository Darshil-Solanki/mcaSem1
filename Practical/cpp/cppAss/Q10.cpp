#include <iostream.h>
#include <conio.h>
class Base {
public:
    void show() {
        cout << "This is the base class." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "This is the derived class." << endl;
    }
};

void main() {
    clrscr();
    Base b;
    Derived d;

    b.show(); // Calls base class function
    d.show(); // Calls derived class function

    getch();
}
