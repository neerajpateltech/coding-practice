/*Given a binary array nums, return the maximum number of consecutive 1s in the array.
Consecutive means continuous — ek ke baad ek.
2. Example
Input:
nums = {1, 1, 0, 1, 1, 1};
Output: 3   
3. Thinking Process
Bas do variables maintain karne hain:
- count → current consecutive 1s count
- maxCount → ab tak ka maximum count
Logic
1. Array traverse karo.
2. Agar nums[i] == 1, toh count++.
3. Agar nums[i] == 0, toh current sequence break ho gayi — count = 0.
4. Har step par maxCount = max(maxCount, count) update karo.
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int nums[] = {1, 1, 0, 1, 1, 1};
    int n = 6;

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
             maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << maxCount;

    return 0;
}
