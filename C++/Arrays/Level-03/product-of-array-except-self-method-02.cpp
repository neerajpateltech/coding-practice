// Method 02 using division method o(n) complexity
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    int product = 1;

    // Calculate product of all elements
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }

    int ans[n];

    // Product except self
    for (int i = 0; i < n; i++)
    {
        ans[i] = product / arr[i];
    }

    // Print answer array
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
