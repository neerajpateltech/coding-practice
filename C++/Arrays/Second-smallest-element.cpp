// Finding second smallest element

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter an elements of an arrray : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements of an array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
              secondsmallest = arr[i];
        }
    }
    if (  secondsmallest == INT_MAX)
    {
        cout << "No second smallest found";
    }
    else
        cout << "Second smallest element is " << " " << secondsmallest;
}
