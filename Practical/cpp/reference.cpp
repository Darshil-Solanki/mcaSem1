/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void change(int b){
    b=100;
}
void changeMe(int &b){
    b=100;
}
int main()
{
    int b=0;
    change(b);
    cout << b << endl;
    changeMe(b);
    cout << b << endl;
    return 0;
}
