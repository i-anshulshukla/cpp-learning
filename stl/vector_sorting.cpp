#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {45, 12, 89, 33, 2, 78, 56};

    cout << "Original vector: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // Sorting in ascending order
    sort(nums.begin(), nums.end());

    cout << "Sorted vector (Ascending): ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // Sorting in descending order
    sort(nums.rbegin(), nums.rend());

    cout << "Sorted vector (Descending): ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
