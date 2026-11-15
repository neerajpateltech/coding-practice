// Check if the given array is sorted or not
 
#include<iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size";
        return 0;
    }

    int arr[n];

    cout << "Enter elements of an array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] > arr[i + 1]) {

            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}
