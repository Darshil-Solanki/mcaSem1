/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int sum(int a,int b){
 return a+b;   
}
int sum(int a,int b,int c){
    return a+b+c;
}
int sum(int a,int b,int c,int d){
    return a+b+c+d;
}
int main()
{
    int a,b,c,d;
    
    cout << "sum of 2 number 3 and 8 is : " << sum(3,8) << endl;
    cout << "sum of 3 number 3 and 8 and 9 is : " << sum(3,8,9) << endl;
    cout << "sum of 4 number 3 and 8 and 9 and 5 is: " << sum(3,8,9,5) << endl;
    return 0;
}
