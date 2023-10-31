#include <conio.h>
#include <iostream.h>
void main() {
    clrscr();
	int num1 = 10;
    double num2 = num1; // Implicit casting from int to double

    cout << "Implicit Type Conversion: " << num2 << endl;

    // Explicit Type Conversion
    double num3 = 15.5;
    int num4 = int(num3); // Explicit casting from double to int

    cout << "Explicit Type Conversion: " << num4 << endl;

    getch();
}
