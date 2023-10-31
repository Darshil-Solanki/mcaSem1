#include <iostream.h>
#include <conio.h>
inline int square(int x) {
    return x * x;
}
void main() {
    clrscr();
    int num = 5;
    int result = square(num);

    cout << "Square of " << num << " is " << result << endl;

    getch();
}
