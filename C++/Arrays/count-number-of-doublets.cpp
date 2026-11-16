// Count Number of Pairs (Doublets) Whose Sum Is Equal to a Given Value X

#include<iostream>
using namespace std;

int main() {

    int arr[] = {2, 4, 3, 5, 6, 1, 7};
    int n = 7;

    int x = 7;
    int count = 0;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == x) {
                count++;
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    cout << "Total number of pairs: " << count;

    return 0;
}
