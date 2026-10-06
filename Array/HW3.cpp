/* Write a function to SWAP the max & min number of an array*/

#include<bits/stdc++.h>
using namespace std;

void SwapMaxMin(int arr[], int size) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallIndex, largeIndex;

    for (int i=0; i<size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallIndex = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            largeIndex = i;
        }
    }
    swap(arr[smallIndex], arr[largeIndex]);
}

int main()
{
    int arr[] = {3, 5, 5, 46, 25, 63};
    int size = sizeof(arr)/sizeof(int);

    SwapMaxMin(arr, size);

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
