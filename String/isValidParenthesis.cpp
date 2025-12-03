#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            char top = st.top();
            st.pop();
            if (c == ')' && top != '(' || c == '}' && top != '{' || c == ']' && top != '[')
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string st1 = "{[{[}]}";
    string st2 = "[]{}()";
    cout << st1 << " -> " << (isValid(st1) ? "It is a valid parenthesis" : "It is not a valid parenthesis") << endl;
    cout << st2 << " -> " << (isValid(st2) ? "It is a valid parenthesis" : "It is not a valid parenthesis");
    return 0;
}