#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;

    for(int val : nums) {
        ans = ans^val;     //Bitwise Or operation
    }

    return ans;
}

int main()
{
    vector<int> vec;
    int x, num;

    cin >> x;

    for (int i=0; i<x; i++) {
        cin >> num;
        vec.push_back(num);
    }

    int result = singleNumber(vec);
    cout << result << endl;

    return 0;
}