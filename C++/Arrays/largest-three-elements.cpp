/*C++ program to find the three largest distinct elements in an array using a single traversal without sorting.*/

#include <iostream>
#include <climits>
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

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third && arr[i] != second && arr[i] != first)
        {
            third = arr[i];
        }
    }

    if (third == INT_MIN)
        cout << "Less than 3 distinct elements";
    else
    {
        cout << "First largest: " << first << endl;
        cout << "Second largest: " << second << endl;
        cout << "Third largest: " << third << endl;
    }
}