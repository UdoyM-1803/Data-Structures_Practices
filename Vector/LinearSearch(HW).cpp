#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& vec, int target) {
    for (int val : vec) {
        if (val == target) {
            return val;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {4, 2, 7, 8, 1, 2, 5};
    int target = 4;

    int find = linearSearch(vec, target);
    cout << find << endl;

    return 0;
}