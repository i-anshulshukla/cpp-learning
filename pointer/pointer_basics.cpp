#include <iostream>

using namespace std;

int main() {
    int x = 42;
    int *ptr = &x; // ptr stores the memory address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x (&x): " << &x << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // Modifying value via pointer
    *ptr = 100;
    cout << "New value of x after *ptr = 100: " << x << endl;

    return 0;
}
