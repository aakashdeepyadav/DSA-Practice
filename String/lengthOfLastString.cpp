#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLastString(string str)
{
    vector<string> vs;
    string s = "";
    int sz = 0;
    string lsw = "";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            s += str[i];
            if (str[i + 1] == ' ' && str[i + 2 != ' '])
            {
                vs.push_back(s);
                s = "";
            }

            if(s.size()!=0){

                vs.push_back(s);
            }
        }
    }
    sz = vs.size();
    lsw = vs[sz - 1];
    return lsw.size();
}

int main()
{
    string str = "  Hello how all are you doing    ";
    int swl = lengthOfLastString(str);

    cout << "The length of last word is: " << swl;
    return 0;
}