#include <conio.h>
#include <iostream.h>

template <class T>
T add(T a, T b) {
    return a + b;
}


void main() {
    clrscr();
    int num1 = 5, num2 = 3;
    double d1 = 2.5, d2 = 1.5;

    int sum1 = add(num1, num2);
    double sum2 = add(d1, d2);

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;

    getch();
}
