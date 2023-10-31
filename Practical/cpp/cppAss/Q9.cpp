#include <iostream.h>
#include <conio.h>

class MyFriend;

class MyClass {
	private:
		int x;

	public:
		MyClass() : x(5) {}

		friend void showPrivate(MyClass obj);
		friend class MyFriend;
};

class MyFriend {
public:
    void showPrivate(MyClass obj) {
        cout << "Private member x: " << obj.x << endl;
    }
};

void showPrivate(MyClass obj) {
    cout << "Private member x: " << obj.x << endl;
}

void main() {
    clrscr();
    MyClass obj;
    MyFriend friendObj;
    showPrivate(obj);
    friendObj.showPrivate(obj);
    getch();
}
