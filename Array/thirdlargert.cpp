#include <iostream>
#include <vector>
#include <set>
using namespace std;

int thirdMax(vector<int> &nums)
{
    set<int> s;
    for (int num : nums)
    {
        s.insert(num);
        if (s.size() > 3)
            s.erase(s.begin());
    }
    return s.size() == 3 ? *s.begin() : *s.rbegin();
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = thirdMax(nums);
    cout << "Third distinct maximum (or max if not exist): " << result << endl;

    return 0;
}
