/* Write a function to print intersection of 2 arrays */

#include<bits/stdc++.h>
using namespace std;

void Intersection(int arr1[], int arr2[], int size1, int size2) {
    int size3 = min(size1, size2);
    int arr3[size3];

    int k=0;
    for (int i=0; i<size1; i++) {
        for (int j=0; j<size2; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[k] = arr1[i];
                k++;    
            }
        }
    }
    for (int i=0; i<k; i++) {
        cout << arr3[i] << " ";
    }
}

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 5, 3, 1};

    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);

    Intersection(arr1, arr2, size1, size2);

    return 0;
}