/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class myClass{
    int a;
    public:
        void setA(const int *a){
            this->a = *a;
        }
        int getA(){
            return a;
        }
    
};
int main()
{
    int a=10;
    int *ap=&a;
    myClass obj;
    obj.setA(ap);
    cout << "ap pointer value: "<<*ap<<endl;
    cout << obj.getA()<<endl;    
    return 0;
}