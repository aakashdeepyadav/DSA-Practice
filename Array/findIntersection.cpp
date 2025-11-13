#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> intersection(vector<int> &v1, vector<int> &v2)
{
    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());

    vector<int> result;

    for (auto val : s1)
    {
        if (s2.count(val))
        {
            result.push_back(val);
        }
    }

    return result;
}

int main()
{
    vector<int> vec1 = {1, 4, 6, 3, 2, 7};
    vector<int> vec2 = {3, 9, 2, 6, 3};

    vector<int> interSec = intersection(vec1, vec2);
    cout << "The inter-section of the sets are : ";

    for (auto e : interSec)
    {
        cout << e << " ";
    }
    return 0;
}