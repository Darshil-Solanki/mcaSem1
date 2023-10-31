#include <conio.h>
#include <iostream.h>
class MyClass {
public:
    static int count;
    int data;

    MyClass() {
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int MyClass::count = 0;

void main() {
    clrscr();
    MyClass obj1, obj2, obj3;

    obj1.displayCount(); // Accessing static function through an object
    MyClass::displayCount(); // Accessing static function through class


    getch();
}
