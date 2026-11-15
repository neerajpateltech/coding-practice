// Find the Smallest Missing Element

#include <iostream>
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
    int missing = n + 1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            flag = true;
            missing = i + 1;
            break;
        }
    }
    if (flag)
        cout << "missing element is : " << missing;
    else
        cout << missing;
}