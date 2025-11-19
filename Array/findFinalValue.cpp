#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findFinalValue(vector<int> &nums, int original)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == original)
        {
            original *= 2;
        }
    }
    return original;
}

int main()
{
    vector<int> vec = {1, 4, 8, 16, 36};
    int original = 4;

    cout << "The final value is " << findFinalValue(vec, original);
    return 0;
}