// Kth largest element in given array

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter an elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr, arr + n);
    int k;
    cout << "Enter the value of k : ";
    cin >> k;
    cout << "Kth largest element in given array is " << " " << arr[n - k];
}