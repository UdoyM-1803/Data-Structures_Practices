#include<bits/stdc++.h>
using namespace std;

void changeArray(int arr[], int size) {
    cout << "In function\n";
    for (int i=0; i<size; i++) {
        arr[i] = 2*arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = { 1, 2, 3};

    changeArray(arr, 3);

    cout << "In main\n";
    for (int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}