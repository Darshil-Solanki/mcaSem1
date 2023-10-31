#include <conio.h>
#include <iostream.h>

class Complex {
private:
    int real;
    int imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    friend Complex operator+(const Complex& a, const Complex& b);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

void main() {
    clrscr();
    Complex num1(3, 2);
    Complex num2(1, 4);
    Complex sum = num1 + num2;

    num1.display();
    num2.display();
    cout << "Sum: ";
    sum.display();

    getch();
}
