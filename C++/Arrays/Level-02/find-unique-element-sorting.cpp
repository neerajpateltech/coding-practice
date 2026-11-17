/* Write a C++ program to find the unique element in an array where every element appears exactly twice
except one element, which appears only once. */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sorting the array
    sort(arr, arr + n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Check first element
    if (arr[0] != arr[1])
    {
        cout << "Unique element: " << arr[0];
    }

    // Check last element
    else if (arr[n - 1] != arr[n - 2])
    {
        cout << "Unique element: " << arr[n - 1];
    }

    // Check middle elements
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] != arr[i - 1] &&
                arr[i] != arr[i + 1])
            {

                cout << "Unique element: " << arr[i];
                break;
            }
        }
    }

    return 0;
}
