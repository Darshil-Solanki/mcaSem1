#include <iostream.h>
#include <conio.h>
class Parent {
public:
    int parentVar;
};

class Child1 : public Parent {
public:
    int child1Var;
};

class Child2 : public Parent {
public:
    int child2Var;
};

void main() {
    clrscr();
	Child1 obj1;
    Child2 obj2;
    obj1.parentVar = 10;
    obj1.child1Var = 20;
    obj2.parentVar = 30;
    obj2.child2Var = 40;

    cout << "Child1 - ParentVar: " << obj1.parentVar << ", Child1Var: " << obj1.child1Var << endl;
    cout << "Child2 - ParentVar: " << obj2.parentVar << ", Child2Var: " << obj2.child2Var << endl;
    getch();
}
