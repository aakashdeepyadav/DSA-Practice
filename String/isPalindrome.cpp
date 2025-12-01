#include <iostream>

using namespace std;

bool isPalindrome(string str)
{

    for (int i = 0; i < str.size() / 2; i++)
    {
        if (str[i] != str[str.size() - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string txt = "HellolleH";
    cout << isPalindrome(txt);

    return 0;
}