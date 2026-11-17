#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialization and push_back
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "Elements in vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Size and Capacity
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;

    // Accessing elements
    cout << "First element (front): " << vec.front() << endl;
    cout << "Last element (back): " << vec.back() << endl;
    cout << "Element at index 1: " << vec.at(1) << endl;

    // Pop back
    vec.pop_back();
    cout << "After pop_back, size: " << vec.size() << endl;

    return 0;
}
