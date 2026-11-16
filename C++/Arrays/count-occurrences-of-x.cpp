// Count occurrence of x

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 4, 2, 4, 5};
    int n = 5;
    int x = 4;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    if (count == 0)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Frequency of " << x << " is: " << count;
    }

    return 0;
}
