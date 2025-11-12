#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool containsDuplicate(vector<int> &numsArr)
{
    unordered_set<int> st;

    for (int i = 0; i < numsArr.size(); i++)
    {
        if (st.count(numsArr[i]))
        {
            return true;
            st.insert(numsArr[i]);
        }
    }
    return false;
}

int main()
{

    vector<int> vec = {1, 2, 3};

    bool isDupli = containsDuplicate(vec);

    cout << "Is there any duplicate element is present in the array : " << isDupli;
    return 0;
}