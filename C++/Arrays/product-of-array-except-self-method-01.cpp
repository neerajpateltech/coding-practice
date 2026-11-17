// Product of Array Except Self using O(n^2) using nested loop

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        long long product = 1;

        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }

        cout << product << endl;
    }

    return 0;
}
