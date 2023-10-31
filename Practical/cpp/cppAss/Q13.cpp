#include <conio.h>
#include <iostream.h>

class Complex {
private:
    int real;
    int imag;

public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

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
