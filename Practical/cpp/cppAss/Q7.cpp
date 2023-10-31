#include <iostream.h>
#include <conio.h>
class A {
public:
    void displayA() {
         cout << "Class A" <<  endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class C {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D" << endl;
    }
};

void main() {
    clrscr();
    D obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();
    getch();
}
