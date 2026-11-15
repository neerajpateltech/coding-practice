/* Find the second largest element in the given array */
#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter an elements of an arrray : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of an array : ";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int largest =INT_MIN;
    int secondlargest=INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>secondlargest && arr[i] != largest){
            secondlargest=arr[i];
        }
    }
    if (secondlargest == INT_MIN){
        cout<<"No second largest found";
    }
    else cout<<"Second largest element is "<<" "<<secondlargest;
}
