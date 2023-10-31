#include <iostream.h>
#include <conio.h>
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

void main() {
    clrscr();
	Calculator calc;
    int result1 = calc.add(5, 3);
    double result2 = calc.add(2.5, 3.7);

    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    getch();
}
