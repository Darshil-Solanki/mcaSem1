#include <conio.h>
#include <iostream.h>
class Shape {
public:
    virtual void display() = 0;
};

class Circle : public Shape {
public:
    void display() {
        cout << "This is a circle." << endl;
    }
};

void main() {
    clrscr();
    // Shape shape;  // You cannot instantiate an abstract class
    Circle circle;
    circle.display();

    getch();
}
