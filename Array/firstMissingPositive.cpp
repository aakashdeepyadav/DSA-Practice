#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstMissingPositive(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    int newIndex = 1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > 0)
        {
            if (vec[i] != newIndex)
            {
                return newIndex;
            }
            newIndex++;
        }
    }
    return newIndex;
}

int main()
{
    vector<int> vec = {-2, 5, 3, 1, 4};   // should be return 2, as 2 is smallest positive
    vector<int> vec1 = {1, 2, 0};         // return 3
    vector<int> vec2 = {3, 4, -1, 1};     // return 2
    vector<int> vec3 = {7, 8, 9, 11, 12}; // return 1
    cout << firstMissingPositive(vec1);
    return 0;
}