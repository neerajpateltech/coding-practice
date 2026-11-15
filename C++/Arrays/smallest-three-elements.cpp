
/*find the three smallest distinct elementsin an array using a single traversal without sorting.*/

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

    int first = INT_MAX, second = INT_MAX, third = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] < third &&
                 arr[i] != second &&
                 arr[i] != first)
        {
            third = arr[i];
        }
    }

    if (third == INT_MAX)
        cout << "Less than 3 distinct elements";
    else
    {
        cout << "First smallest: " << first << endl;
        cout << "Second smallest: " << second << endl;
        cout << "Third smallest: " << third << endl;
    }

    return 0;
}
