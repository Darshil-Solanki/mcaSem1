#include <iostream.h>
#include <conio.h>
int add(int a, int b = 0) {
    return a + b;
}
void main() {
    clrscr();
	int sum1 = add(5);
    int sum2 = add(5, 3);

    cout << "Sum1: " << sum1 << endl;
    cout << "Sum2: " << sum2 << endl;
    getch();
}
