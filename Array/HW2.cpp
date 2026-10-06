/* Write a Function to calculate sum and product of all number in an array.*/

#include<bits/stdc++.h>
using namespace std;

void SumProduct(int arr[], int size) {
    int sum = 0, product = 1;
    
    for (int i=0; i<size; i++) {
        sum = sum+arr[i];
        product = product*arr[i];
    }

    cout << "Sum of the Numbers is = " << sum << endl;
    cout << "Product of the Numbers is = " << product << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(int);

    SumProduct(arr, size);

    return 0;
}