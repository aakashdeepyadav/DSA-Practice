#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int> vecArr)
{
    int n = vecArr.size();
    vector<int> sortedSquareArr(n);

    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right)
    {
        if (abs(vecArr[left]) > abs(vecArr[right]))
        {
            sortedSquareArr[pos] = vecArr[left] * vecArr[left];
            left++;
        }
        else
        {
            sortedSquareArr[pos] = vecArr[right] * vecArr[right];
            right--;
        }

        pos--;
    }

    return sortedSquareArr;
}

int main()
{
    vector<int> vec = {-5, -1, 4, 6, 12};

        for (auto i : sortedSquares(vec))
    {
        cout << i << " ";
    }
    return 0;
}