// Find duplicate elements using sorting


#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Check duplicate elements
    bool flag = false;

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] == arr[i + 1]) {

            cout << "Duplicate element found: " << arr[i] << endl;

            flag = true;
            break;
        }
    }

    if (flag == false) {
        cout << "Duplicate element not found";
    }

    return 0;
}
