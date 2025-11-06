<<<<<<< HEAD
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void nextPermutation(vector<int> &nums)
{

    int n = nums.size();
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    if (i >= 0)
    {
        int j = n - 1;
        while (nums[j] <= nums[i])
        {
=======
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void nextPermutation(vector<int>& nums) {
    
    int n = nums.size();
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) {
>>>>>>> c667d1b0a559ad4f54aac033533636af05521e99
            j--;
        }

        swap(nums[i], nums[j]);
    }

<<<<<<< HEAD
    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
=======

    reverse(nums.begin() + i + 1, nums.end());
}



int main() {
>>>>>>> c667d1b0a559ad4f54aac033533636af05521e99

    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

<<<<<<< HEAD
    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}
=======
    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}
>>>>>>> c667d1b0a559ad4f54aac033533636af05521e99
