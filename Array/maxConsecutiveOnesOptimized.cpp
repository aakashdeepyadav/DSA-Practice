#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMaxConsecutiveOnesOptimized(vector<int> &Vec)
{
    int count = 0;
    int maxx = 0;

    for (int i : Vec)
    {
        if (i != 0)
        {
            count++;
            maxx = max(count, maxx);
        }
        else
        {
            count = 0;
        }
    }

    return maxx;
}

int main()
{

    vector<int> vec = {1, 0, 0, 1, 1, 0, 0, 1, 1, 1};

    cout << findMaxConsecutiveOnesOptimized(vec);
    return 0;
}