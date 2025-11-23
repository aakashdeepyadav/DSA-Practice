#include <iostream>
#include <vector>
#include <string>

using namespace std;

string generateExcelColumnID(int columnNo)
{
    vector<int> vec;
    string columnID = "";
    vector<string> alpha = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int num;
    while (columnNo > 0)
    {   columnNo--;
        num = columnNo % 26;
        vec.push_back(num);
        columnNo = columnNo / 26;
    }

    for (int i = vec.size()-1; i >=0; i--)
    {
        columnID.append(alpha[vec[i]]);
    }
    return columnID;
}

int main()
{
    int a = 8495;
    cout << generateExcelColumnID(a);
    return 0;
}