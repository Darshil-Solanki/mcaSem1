#include <conio.h>
#include <iostream.h>

class Shape {
public:
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void display() {
        cout << "This is a circle." << endl;
    }
};

void main() {
    clrscr();
    Shape* shape = new Circle;
    shape->display(); // Calls the derived class function

    delete shape;

    getch();
}
