#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char> &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left <= right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    vector<char> str = {'a', 'a', 'k', 'a', 's', 'h'};

    reverseString(str);

    for (char c : str)
    {
        cout << c << " ";
    }

    return 0;
}