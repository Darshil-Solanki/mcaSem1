#include <iostream.h>
#include <conio.h>
class MyClass {
	public:
		int myVar;
		void display() {
			cout << "Value of myVar: " << myVar << endl;
		}
};
void main() {
    clrscr();
	MyClass obj;
    obj.myVar = 42;
    obj.display();
    getch();
}