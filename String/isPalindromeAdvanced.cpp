#include <iostream>

using namespace std;

bool isPalindromeAdvanced(string str)
{
    int left = 0;
    int right = str.size() - 1;

    while (left < right)
    {
        while (left < right && !isalpha(str[left]))
        {
            left++;
        }
        while (left < right && !isalpha(str[right]))
        {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{

    string txt1 = "How are you & duoy er, awoh";
    string txt2 = "Take some time";
    cout << (isPalindromeAdvanced(txt1) ? "Palindrome" : "Not a palindrome") << endl;
    cout << (isPalindromeAdvanced(txt2) ? "Palindrome" : "Not a palindrome");

    return 0;
}