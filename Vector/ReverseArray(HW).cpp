#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& vec) {
    int count = vec.size();
    int start = 0, end = count-1;

    while (start < end)
    {
        swap(vec.at(start), vec.at(end));
        start++;
        end--;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    
    reverseArray(vec);

    for (int val : vec) {
        cout << val << " ";
    }

    return 0;
}