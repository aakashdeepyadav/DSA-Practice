#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstMissingPositive(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        while (vec[i] > 0 && vec[i] <= size && vec[vec[i] - 1] != vec[i])
        {
            swap(vec[i], vec[vec[i] - 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (vec[i] != i + 1)
        {
            return i + 1;
        }
    }
    return size + 1;
}

int main()
{
    vector<int> vec = {-2, 5, 3, 1, 4};   // should be return 2, as 2 is smallest positive no.
    vector<int> vec1 = {1, 2, 0};         // return 3
    vector<int> vec2 = {3, 4, -1, 1};     // return 2
    vector<int> vec3 = {7, 8, 9, 11, 12}; // return 1
    cout << firstMissingPositive(vec3);
    return 0;
}