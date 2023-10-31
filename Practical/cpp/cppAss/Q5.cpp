#include <iostream.h>
#include <conio.h>
class Grandparent {
public:
    int grandparentVar;
};

class Parent : public Grandparent {
public:
    int parentVar;
};

class Child : public Parent {
public:
    int childVar;
};
    
void main() {
    clrscr();
	Child obj;
    obj.grandparentVar = 10;
    obj.parentVar = 20;
    obj.childVar = 30;

    cout << "GrandparentVar: " << obj.grandparentVar << endl;
    cout << "ParentVar: " << obj.parentVar << endl;
    cout << "ChildVar: " << obj.childVar << endl;
    getch();
}
