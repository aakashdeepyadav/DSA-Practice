#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> pascalTriangle(int noOfRows)
{
    vector<vector<int>> vecArr;

    if (noOfRows <= 0)
        return vecArr;

    if (noOfRows == 1)
    {
        vecArr.resize(1);
        vecArr[0].resize(1);
        vecArr[0][0] = 1;
        return vecArr;
    }
    else if (noOfRows == 2)
    {
        vecArr.resize(2);
        vecArr[0].resize(1);
        vecArr[1].resize(2);
        vecArr[0][0] = 1;
        vecArr[1][0] = 1;
        vecArr[1][1] = 1;
        return vecArr;
    }
    else
    {
        vecArr.resize(noOfRows);
        vecArr[0].resize(1);
        vecArr[1].resize(2);
        vecArr[0][0] = 1;
        vecArr[1][0] = 1;
        vecArr[1][1] = 1;
    }

    for (int i = 2; i < noOfRows; i++)
    {   vecArr[i].resize(i+1);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                vecArr[i][j] = 1;
            }
            else
            {
                vecArr[i][j] = vecArr[i - 1][j - 1] + vecArr[i - 1][j];
            }
        }
    }
    return vecArr;
}

int main()
{

    int noOfRows;
    cout << "Enter no. of row: ";
    cin >> noOfRows;

    vector<vector<int>> returnedVector = pascalTriangle(noOfRows);

    for (int i = 0; i <= noOfRows - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << returnedVector[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}