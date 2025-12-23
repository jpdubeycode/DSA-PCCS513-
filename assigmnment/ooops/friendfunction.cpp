#include <iostream>
using namespace std;

class A; // Forward declaration if needed, here not really necessary

class B {
private:
    int y = 20;

public:
    void accessA(A obj); // Declare member function first

    // 4. Mutual friendship (A can also access B)
    friend class A;
};

class A {
private:
    int x = 10;

    // 1. Friend function
    friend void friendFunc(A);

    // 2. Friend member function of class B
    friend void B::accessA(A);

    // 3. Friend class
    friend class B;
};

void friendFunc(A obj) {
    cout << "Friend function: x = " << obj.x << endl;
}

// Now define B's member function that accesses A
void B::accessA(A obj) {
    cout << "B's member accessing A: x = " << obj.x << endl;
}

int main() {
    A a;
    B b;

    friendFunc(a);     // Friend function
    b.accessA(a);      // Friend member function

    // A accessing B is not shown, but allowed due to friend class

    return 0;
}

