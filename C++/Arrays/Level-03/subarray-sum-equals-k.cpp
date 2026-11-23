/*Given an integer array nums and an integer k, return the total number of continuous subarrays
whose sum equals k.

A subarray is a continuous part of an array.
Example 1
Input:
nums = {1, 1, 1};
k = 2
Output: 2  */


#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int k = 3;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == k)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
