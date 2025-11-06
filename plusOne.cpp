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
            vec[size - 1] = 0;
            vec[size - 2] += 1;
            return vec;
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

    vector<int> vec6 = {9, 2, 3, 9};

    vector<int> updatedVec = plusOne(vec6);

    for (auto v : updatedVec)
    {
        cout << v << " ";
    }

    return 0;
}