// Find the Smallest Non-Repeating Element in an Array Using Sorting

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {8, 4, 9, 4, 5, 8};
    int n = 6;

    sort(arr, arr + n);

    bool flag = false;

    if (arr[0] != arr[1])
    {
        cout << "Smallest non-repeating element: " << arr[0];
        flag = true;
    }
    else if (arr[n-1] != arr[n-2])
    {
        cout << "Smallest non-repeating element: " << arr[n-1];
        flag = true;
    }
    else
    {
        for (int i = 1; i < n-1; i++)
        {
            if (arr[i] != arr[i+1] && arr[i] != arr[i-1])
            {
                cout << "Smallest non-repeating element: " << arr[i];
                flag = true;
                break;
            }
        }
    }

    if (!flag)
    {
        cout << "No non-repeating element found";
    }

    return 0;
}
