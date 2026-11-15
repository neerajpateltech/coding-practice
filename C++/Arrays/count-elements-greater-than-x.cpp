/* Count Elements Greater Than a Given Number X */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of given array : ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of given array : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the value of x : ";
    cin >> x;
    int count = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << count;
}