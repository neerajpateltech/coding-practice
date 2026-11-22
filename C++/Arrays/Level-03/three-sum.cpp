//  Leetcode :- 15 Three Sum Problem

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int n = 6;

    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate first elements
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right) {

            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                cout << arr[i] << " "
                     << arr[left] << " "
                     << arr[right] << endl;

                left++;
                right--;

                // Skip duplicate left elements
                while (left < right &&
                       arr[left] == arr[left - 1]) {
                    left++;
                }

                // Skip duplicate right elements
                while (left < right &&
                       arr[right] == arr[right + 1]) {
                    right--;
                }
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return 0;
}
