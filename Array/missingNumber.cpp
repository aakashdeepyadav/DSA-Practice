#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i)
            return i;
    }
    return nums.size();
}

int main()
{

    vector<int> vecArray = {1, 2, 0, 5, 3};
    int missedNum = missingNumber(vecArray);
    cout << "The missing number is " << missedNum;
    return 0;
}