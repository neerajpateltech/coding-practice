# 3Sum

## Problem Statement
Given an integer array `nums`, find all unique triplets `[nums[i], nums[j], nums[k]]` such that:

- `i != j`
- `i != k`
- `j != k`
- `nums[i] + nums[j] + nums[k] == 0`

The solution should not contain duplicate triplets.

## Approach

I used the **Sorting + Two Pointers** approach.

### Thinking Process

1. We need to find three numbers whose sum is zero.
2. Fix the first number using a loop.
3. Now the problem becomes finding two numbers whose sum is equal to `-nums[i]`.
4. Sort the array.
5. Use two pointers: `left` and `right`.
6. If the sum is zero, store the triplet.
7. Skip duplicate values to avoid repeated triplets.

## Algorithm

1. Sort the array.
2. Traverse the array using index `i`.
3. Skip duplicate values of `nums[i]`.
4. Initialize `left = i + 1` and `right = n - 1`.
5. Calculate the sum of three elements.
6. If sum is zero:
   - Store the triplet.
   - Move both pointers.
   - Skip duplicate values.
7. If sum is less than zero, increment `left`.
8. If sum is greater than zero, decrement `right`.
9. Continue until `left >= right`.

## Example

Input:
`[-1, 0, 1, 2, -1, -4]`

Output:
`[-1, -1, 2]`
`[-1, 0, 1]`

## Complexity

- Time Complexity: `O(n²)`
- Auxiliary Space: `O(1)` excluding sorting and output storage.

## Pattern

Sorting + Two Pointers

## What I Learned

- How sorting helps in solving array problems.
- How to convert 3Sum into a 2Sum problem.
- How to use two pointers efficiently.
- How to skip duplicate elements.
- Why both pointers move after finding a valid triplet.

## Learning Note

I used learning resources to understand the approach, then practiced the logic, implemented the solution, and studied duplicate handling.
