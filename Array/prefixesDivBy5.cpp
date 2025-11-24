#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

vector<bool> prefixesDivBy5(vector<int> &nums)
{
    vector<bool> bl;
    vector<int> pre;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        string nm;
        for (int j = 0; j < size - i; j++)
        {
            nm += to_string(nums[j]);
        }
        int nmm = stoi(nm);
        pre.push_back(nmm);
    }

    reverse(pre.begin(), pre.end());

    for (int i = size - 1; i >= 0; i--)
    {
        int n = 0;
        n = n + pow(2, i) * pre[size - i - 1]; //              2^2 * 1 +  2^1 * 1 + 2^0 *1
        if (n % 5 == 0)
        {
            bl.push_back(true);
        }
        else
        {
            bl.push_back(false);
        }
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
