#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums)/sizeof(int);
    
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int small_Index, large_Index;

    for (int i=0; i<size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            small_Index = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            large_Index = i;
        }
    }

    cout << "The index of Smallest number is = " << small_Index << endl;
    cout << "The index of Largest number is = " << large_Index << endl;

    return 0;
}