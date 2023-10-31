#include <iostream.h>
#include <conio.h>
class Base {
public:
    int baseVar;
};

class Derived : public Base {
public:
    int derivedVar;
};

void main() {
    clrscr();
	Derived obj;
    obj.baseVar = 10;
    obj.derivedVar = 20;

    cout << "BaseVar: " << obj.baseVar << endl;
    cout << "DerivedVar: " << obj.derivedVar << endl;

    getch();
}
