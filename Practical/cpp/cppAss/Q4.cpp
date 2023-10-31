#include <iostream.h>
#include <conio.h>
class ClassA {
public:
    int varA;
};

class ClassB {
public:
    int varB;
};

class MultipleInheritance : public ClassA, public ClassB {
public:
    int varC;
};

void main() {
    clrscr();
	MultipleInheritance obj;
    obj.varA = 10;
    obj.varB = 20;
    obj.varC = 30;

    cout << "VarA: " << obj.varA << endl;
    cout << "VarB: " << obj.varB << endl;
    cout << "VarC: " << obj.varC << endl;
    getch();
}
