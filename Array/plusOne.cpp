#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &vec)
{
    int size = vec.size();
    if (vec[size - 1] != 9)
    {
        vec[size - 1] += 1;
        return vec;
    }
    else
    {

        bool isAll9 = true;
        for (int v : vec)
        {
            if (v != 9)
            {
                isAll9 = false;
            }
        }

        if (isAll9)
        {
            vec.resize(size + 1);
            vec[0] = 1;
            for (int i = 1; i < vec.size(); i++)
            {
                vec[i] = 0;
            }
            return vec;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                if (vec[size - i - 1] == 9)
                {
                    vec[size - i - 1] = 0;
                }
                else
                {
                    vec[size - i - 1] += 1;
                    return vec;
                }
            }
        }
    }

    return vec;
}

int main()
{
    vector<int> vec1 = {1, 2, 4};
    vector<int> vec2 = {9};
    vector<int> vec3 = {1, 9};
    vector<int> vec4 = {9, 9};
    vector<int> vec5 = {9, 9, 9, 9};
    vector<int> vec6 = {8, 9, 9, 9};
    vector<int> vec7 = {9, 2, 3, 9, 0, 2};

    vector<int> updatedVec = plusOne(vec6);

    for (auto v : updatedVec)
    {
        cout << v << " ";
    }

    return 0;
}