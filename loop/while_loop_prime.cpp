#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        isPrime = false;
    } else {
        int i = 2;
        while (i * i <= n) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }

    if (isPrime)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
