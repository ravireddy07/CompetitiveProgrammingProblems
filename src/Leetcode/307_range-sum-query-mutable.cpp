// https://leetcode.com/problems/range-sum-query-mutable/

// https://leetcode.com/problems/range-sum-query-mutable/discuss/843838/C%2B%2B-Simple-Brute-Force-Solution-or-93-Less-Space-or-Self-Explanatory

#include <iostream>
#include <vector>
using namespace std;

// Runtime: 19% Space: 93%
class NumArray
{
public:
    vector<int> ar;
    NumArray(vector<int> &nums)
    {
        if (nums.size() == 0)
            return;
        ar = nums;
    }

    int sumRange(int i, int j)
    {
        int sum = 0;
        for (int f = i; f <= j; ++f)
            sum += ar[f];
        return sum;
    }

    void update(int i, int val)
    {
        ar[i] = val;
    }
};

int main()
{
    vector<int> input = {3, 0, 1, 4, 2};
    NumArray *obj = new NumArray(input);
    cout << obj->sumRange(2, 5) << endl;
    obj->update(1, 2);
    cout << obj->sumRange(2, 5) << endl;
    return 0;
}