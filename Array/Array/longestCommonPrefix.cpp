#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()){
        return "";
    } 

    sort(strs.begin(), strs.end());

    string a = strs.front(), b = strs.back();

    int i = 0;
    while (i < a.size() && i < b.size() && a[i] == b[i]) i++;
    return a.substr(0, i);
}

int main() {
    vector<string> strs = {"carreer","carry","carrom"};
    cout << longestCommonPrefix(strs);
}
