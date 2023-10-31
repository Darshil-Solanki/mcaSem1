#include <iostream.h>
#include <conio.h>
class MyNumber {
private:
    int num;

public:
    MyNumber() : num(0) {}
    MyNumber(int n) : num(n) {}

    MyNumber operator-() {
        return MyNumber(-num);
    }

    void display() {
        cout << "Number: " << num << endl;
    }
};

void main() {
    clrscr();
    MyNumber num1(5);
    MyNumber num2 = -num1;

    num1.display();
    num2.display();

    getch();
}
