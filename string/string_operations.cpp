#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Hello";
    string str2 = " World";

    // Concatenation
    string result = str + str2;
    cout << "Concatenated: " << result << endl;

    // Length / Size
    cout << "Length: " << result.length() << endl;

    // Substring (start_index, length)
    string sub = result.substr(0, 5);
    cout << "Substring (0,5): " << sub << endl;

    // Finding a character or substring
    size_t pos = result.find("World");
    if (pos != string::npos) {
        cout << "'World' found at index: " << pos << endl;
    }

    // Reversing a string
    reverse(result.begin(), result.end());
    cout << "Reversed: " << result << endl;

    return 0;
}
