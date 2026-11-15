/* C++ program to modify array elements based on their indices by adding 10 to even-indexed elements and
multiplying odd-indexed elements by 2.*/

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

   for (int i = 0; i < n; i++)
   {
      if (i % 2 == 0)
         arr[i] = arr[i] + 10;
      else
         arr[i] = 2 * arr[i];
   }
   cout << "Array's value after performing operations : ";
   for (int i = 0; i < n; i++)
   {
      cout << arr[i] << " ";
   }
}