// Product of array's elements

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int product = 1;

    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }

    cout << "Product of array elements: " << product;

    return 0;
}
