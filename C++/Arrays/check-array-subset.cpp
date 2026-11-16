// Check Whether One Array Is a Subset of Another Array

#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {2, 4, 6};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};

    int n1 = 3;
    int n2 = 7;

    bool flag;

    for (int i = 0; i < n1; i++)
    {
         flag = false;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = true;
            }
        }
    }
    if (flag) cout<<"Subset";
    else cout<<"Not subset";
}