//  C++ program to implement Linear Search and find the index of a target element in an array.

#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;

    cout << "Enter the value of x: ";
    cin >> x;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == x)
        {
            flag = true;

            cout << "Element found at index: " << i;

            break;
        }
    }

    if (!flag)
    {
        cout << "Element not found";
    }

    return 0;
}
