/* Write a function to print all the unique values in an array */

#include<bits/stdc++.h>
using namespace std;

void UniqueValue(int arr[], int size) {
    for (int i=0; i<size; i++) {
        int isUnique = true;
        for (int k=0; k<size; k++) {
            if (i != k && arr[i] == arr[k]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 7, 2, 3, 4};
    int size = sizeof(arr)/sizeof(int);

    UniqueValue(arr, size);

    return 0;
}