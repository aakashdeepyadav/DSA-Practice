#include <iostream>
#include <vector>
#include <string>
using namespace std;

int binaryToDecimal(string s)
{
    int num = 0;
    for (char c : s)
    {
        num = num * 2 + (c - '0');
    }
    return num;
}

vector<bool> prefixesDivBy5(vector<int> &nums)
{
    vector<bool> bl;
    vector<int> pre;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        string nm = "";
        for (int j = 0; j <= i; j++)
        {
            nm += to_string(nums[j]);
        }
        int nmm = binaryToDecimal(nm);
        pre.push_back(nmm);
    }

    for (int val : pre)
    {
        bl.push_back(val % 5 == 0);
    }

    return bl;
}

int main()
{
    vector<int> vec = {0, 1, 1};
    vector<bool> bll = prefixesDivBy5(vec);
    for (auto n : bll)
    {
        cout << n << " ";
    }

    return 0;
}
