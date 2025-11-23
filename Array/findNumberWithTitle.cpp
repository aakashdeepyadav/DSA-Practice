#include <iostream>
#include <vector>
#include <string>

using namespace std;

int excelTitleToNumber(string columnName)
{
    int num = 0;
    for (char chr : columnName)
    {
        int value = chr - 'A' + 1;
        num = num * 26 + value;
    }
    return num;
}

int main()
{
    string colName = "ABZ";
    cout << excelTitleToNumber(colName);
    return 0;
}