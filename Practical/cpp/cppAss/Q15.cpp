#include <iostream.h>
#include <conio.h>

class MyClass {
public:
    int data;

    MyClass() {
        cout << "Default constructor called." << endl;
        data = 0;
    }

    MyClass(int val) {
        cout << "Parameterized constructor called." << endl;
        data = val;
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

void main() {
    clrscr();
    MyClass obj1;               // Default constructor
    MyClass obj2(42);           // Parameterized constructor

    cout << "Data in obj1: " << obj1.data << endl;
    cout << "Data in obj2: " << obj2.data << endl;

    getch();
}
