#include <iostream>
#include <vector>

using namespace std;

vector<int> getRowValues(int rowIndex)
{
    vector<vector<int>> vecArr;

    if (rowIndex <= 0)
        return {};

    if (rowIndex == 1)
    {
        vecArr.resize(1);
        vecArr[0].resize(1);
        vecArr[0][0] = 1;
        return vecArr[0];
    }
    else if (rowIndex == 2)
    {
        vecArr.resize(2);
        vecArr[0].resize(1);
        vecArr[1].resize(2);
        vecArr[0][0] = 1;
        vecArr[1][0] = 1;
        vecArr[1][1] = 1;
        return vecArr[1];
    }
    else
    {
        vecArr.resize(rowIndex);
        vecArr[0].resize(1);
        vecArr[1].resize(2);
        vecArr[0][0] = 1;
        vecArr[1][0] = 1;
        vecArr[1][1] = 1;
    }

    for (int i = 2; i < rowIndex; i++)
    {
        vecArr[i].resize(i + 1);
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
    return vecArr[rowIndex - 1];
}

int main()
{

    int rowIndex;
    cout << "Enter no. of row: ";
    cin >> rowIndex;

    vector<int> returnedVector = getRowValues(rowIndex);

    for (int j = 0; j < rowIndex; j++)
    {
        cout << returnedVector[j] << " ";
    }
    cout << endl;

    return 0;
}