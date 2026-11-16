/*Write a C++ program to find the smallest repeating element in an array. Sort the array in ascending order 
and find the smallest element that appears more than once.*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {8, 4, 9, 4, 5, 8};
    int n = 6;

    sort(arr, arr + n);

    bool flag = false;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "Smallest repeating element: " << arr[i];
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "No repeating element found";
    }

    return 0;
}
