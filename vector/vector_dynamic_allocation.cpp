#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    // Vector initialized with size n and all elements set to 0
    vector<int> v(n, 0);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "You entered: ";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
