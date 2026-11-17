// Print all occurrence of  X

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 4, 2, 4, 5};
    int n = 5;
    int x = 4;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Occurrence is at index " << i << endl;
            flag = true;
        }
    }

    if (!flag)
    {
        cout << "Element not found";
    }

    return 0;
}
