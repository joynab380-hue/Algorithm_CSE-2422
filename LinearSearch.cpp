
#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "Element found at position " << pos + 1 << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
