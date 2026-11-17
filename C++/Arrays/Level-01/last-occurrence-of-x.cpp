// Find the Last Occurrence of X in a Given Array

#include<iostream>
using namespace std;

int main() {

    int arr[] = {2, 4, 7, 4, 9, 4, 5};
    int n = 7;

    int x = 4;
    int index = -1;

    for(int i = n-1; i >= 0; i--) {

        if(arr[i] == x) {
            index = i;
            break;
        }
    }

    cout << "Last occurrence of " << x << " is at index: " << index;

    return 0;
}
