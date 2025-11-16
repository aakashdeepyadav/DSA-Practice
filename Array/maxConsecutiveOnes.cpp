#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int size = nums.size();
    vector<int> vec;
    int steak = 0;
    for (int i : nums)
    {
        if (i != 0)
        {

            steak++;
        }
        else
        {
            steak = 0;
        }
        vec.push_back(steak);
    }

    sort(vec.begin(), vec.end());
    return vec.back();
}

int main()
{

    vector<int> vec = {1, 0, 0, 1, 1, 0, 0, 1, 1, 1};

    cout << findMaxConsecutiveOnes(vec);
    return 0;
}