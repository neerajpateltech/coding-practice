// Differrence between Even and Odd Index Element

#include<iostream>
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

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
            even = even + arr[i];
        }
        else {
            odd = odd + arr[i];
        }
    }

    cout << "Difference of even and odd index sums: ";

    if (even >= odd) {
        cout << even - odd;
    }
    else {
        cout << odd - even;
    }

    return 0;
}
