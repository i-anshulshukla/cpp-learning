#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a word to check palindrome: ";
    cin >> word;

    if (isPalindrome(word)) {
        cout << word << " is a Palindrome." << endl;
    } else {
        cout << word << " is NOT a Palindrome." << endl;
    }

    return 0;
}
