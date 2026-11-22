// Method 03 : Product of array except self using o(n) time complexity
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int prefix[4];
    int suffix[4];
    int product[4];
    int n = 4;

    // Prefix product except itself
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * arr[i - 1];
    }
    // suffix product except itself
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * arr[i + 1];
    }
    // Product of array except itself
    for (int i = 0; i < n; i++)
    {
        product[i] = suffix[i] * prefix[i];
    }
    cout << "Product of array except itself : ";
    for (int i = 0; i < n; i++)
    {
        cout << product[i] << " ";
    }
}