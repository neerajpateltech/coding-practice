/*Given an array height where each element represents the height of a vertical bar, calculate how much 
rainwater can be trapped between the bars.
height = {4, 2, 0, 3, 2, 5};
Output: 9
2. Understanding
Har index par kitna water store ho sakta hai, ye depend karta hai:
- Uske left side ki maximum height
- Uske right side ki maximum height
Formula:
[water[i] = min(leftMax, rightMax) - height[i]]
Agar result negative aaye, toh water 0 hoga. 
4. Algorithm — Prefix and Suffix Maximum
1. Ek leftMax array banao.
2. Ek rightMax array banao.
3. Har index ka left maximum calculate karo.
4. Har index ka right maximum calculate karo.
5. Formula use karke water calculate karo.
6. Sab water ko add kar do.*/

#include<iostream>
using namespace std;

int main()
{
    int height[] = {4, 2, 0, 3, 2, 5};
    int n = 6;

    int leftMax[n];
    int rightMax[n];

    // Left maximum
    leftMax[0] = height[0];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Right maximum
    rightMax[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Calculate trapped water
    int water = 0;

    for (int i = 0; i < n; i++)
    {
        water += min(leftMax[i], rightMax[i]) - height[i];
    }

    cout << water;

    return 0;
}
