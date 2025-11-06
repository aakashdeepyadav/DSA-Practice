#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &vec)
{
    int size = vec.size();

    for (int i = size - 1; i >= 0; i--)
    {
        if (vec[i] < 9)
        {
            vec[i] += 1;
            return vec;
        }

        vec[i] = 0;
    }

    vec.insert(vec.begin(), 1);
    return vec;
}

int main()
{
    vector<int> vec;
    int size;
    cout << "How many digit you want to enter: ";
    cin >> size;

    cout << "Enter the digits seperated by space 0-9: ";
    for (int i = 0; i < size; i++)
    {
        int dig;
        cin >> dig;
        vec.push_back(dig);
    }

    vector<int> updatedVec = plusOne(vec);

    cout << "The updated array is: ";
    for (auto v : updatedVec)
    {
        cout << v << " ";
    }

    return 0;
}