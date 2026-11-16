// Count frequency of elements in given array

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {8, 4, 9, 4, 5, 8};
    int n = 6;

    sort(arr, arr+n);

    int count = 1;

    for(int i=1; i<n; i++) {

        if(arr[i] == arr[i-1]) {
            count++;
        }
        else {
            cout << arr[i-1] << " occurs " << count << " times" << endl;
            count = 1;
        }
    }

    cout << arr[n-1] << " occurs " << count << " times" << endl;

    return 0;
}
