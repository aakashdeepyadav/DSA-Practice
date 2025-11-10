// You will able to move only adjacent node only

#include <iostream>
#include <vector>

using namespace std;

int minPathSumOfTriangle(vector<vector<int>> &triangle)
{
    for (int i = triangle.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
        {
            triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    return triangle[0][0];
}

int main()
{
    vector<vector<int>> vecArr = {{1}, {2, 5}, {4, 5, 2}};
    cout << minPathSumOfTriangle(vecArr);
    return 0;
}