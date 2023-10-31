#include <conio.h>
#include <iostream.h>
class MyNumber {
private:
    int num;

public:
    MyNumber() : num(0) {}
    MyNumber(int n) : num(n) {}

    friend MyNumber operator-(const MyNumber& n);

    void display() {
        cout << "Number: " << num << endl;
    }
};

MyNumber operator-(const MyNumber& n) {
    return MyNumber(-n.num);
}

void main() {
    clrscr();
    MyNumber num1(5);
    MyNumber num2 = -num1;

    num1.display();
    num2.display();

    getch();
}
