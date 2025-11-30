#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int minSubarray(vector<int> vec, int p)
{
    long long total = 0;
    for (int x : vec)
        total += x;

    int rem = total % p;
    if (rem == 0)
        return 0;

    unordered_map<long long, int> mp;
    mp[0] = -1;

    long long prefix = 0;
    int n = vec.size();
    int ans = n;

    for (int i = 0; i < n; i++)
    {
        prefix = (prefix + vec[i]) % p;
        long long need = (prefix - rem + p) % p;

        if (mp.count(need))
            ans = min(ans, i - mp[need]);

        mp[prefix] = i;
    }

    return ans == n ? -1 : ans;
}

int main()
{
    vector<int> vecArray={3,1,4,2};
    int k=6;

    int subarray=minSubarray(vecArray,k);
    cout << "The minimum subarray is " << subarray;
    return 0;
}