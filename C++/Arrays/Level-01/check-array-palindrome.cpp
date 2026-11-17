// Check Whether an Array Is Palindrome

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Elements of an array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    bool flag = false;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            flag = true;
            break;
        }
    }

    if (flag == false) {
        cout << "Array is Palindrome";
    }
    else {
        cout << "Array is Not Palindrome";
    }

    return 0;
}
