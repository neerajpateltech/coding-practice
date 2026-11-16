// First occurrence of  X
 
#include<iostream>
using namespace std;

int main (){
    int arr[]={8,4,2,4,5};
    int n=5;
    int x=4;

    bool found = false;

    for (int i=0; i<n; i++){
        if (arr[i] == x){
            cout << "First occurrence of " << x << " is at index " << i;
            found = true;
            break;
        }
    }

    if (found == false){
        cout << x << " is not present in the array";
    }

    return 0;
}
