// Count Number of Triplets Whose Sum Is Equal to a Given Value X

#include<iostream>
using namespace std;

int main() {

    int arr[] = {2, 4, 3, 5, 6, 1, 7};
    int n = 7;

    int x = 12;
    int count = 0;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            for(int k = j + 1; k < n; k++) {

                if(arr[i] + arr[j] + arr[k] == x) {

                    count++;

                    cout << "(" << arr[i] << ", "
                         << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }

    cout << "Total number of triplets: " << count;

    return 0;
}
