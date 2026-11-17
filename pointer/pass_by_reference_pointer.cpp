#include <iostream>

using namespace std;

void updateValue(int *p) {
    *p = *p * 2; // Doubles the value at the address
}

int main() {
    int num = 15;
    cout << "Before function call: " << num << endl;

    updateValue(&num); // Passing address of num

    cout << "After function call: " << num << endl;

    return 0;
}
