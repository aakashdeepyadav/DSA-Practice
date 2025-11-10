// Jump to any node in the triangle

#include <iostream>
#include <vector>

using namespace std;

int minPathSum(vector<vector<int>> &vec)
{
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        int min = INT_MAX;
        for (int j = 0; j < vec[i].size(); j++)
        {
            if (vec[i][j] < min)
            {
                min = vec[i][j];
            }
        }
        sum += min;
    }
    return sum;
}

int main()
{
    vector<vector<int>> vecArr = {{1}, {2, 5}, {4, 5, 2}};
    cout << minPathSum(vecArr);
    return 0;
}