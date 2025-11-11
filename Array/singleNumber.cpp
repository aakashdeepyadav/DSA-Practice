#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int num = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        num ^= nums[i];
    }
    return num;
}

int main()
{

    vector<int> vec = {2, 3, 4, 2, 4}; // Here, 2 is not repeated as it comes only 1 times
    int result = singleNumber(vec);
    cout << result;

    return 0;
}