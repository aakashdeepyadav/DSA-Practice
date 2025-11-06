#include<iostream>
#include<vector>

using namespace std;

double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() > arr2.size())
        return findMedianSortedArrays(arr2, arr1);

    int m = arr1.size(), n = arr2.size();
    int totalLeft = (m + n + 1) / 2;
    int low = 0, high = m;

    while (low <= high) {
        int i = (low + high) / 2;
        int j = totalLeft - i;

        int L1 = (i == 0) ? INT_MIN : arr1[i - 1];
        int R1 = (i == m) ? INT_MAX : arr1[i];
        int L2 = (j == 0) ? INT_MIN : arr2[j - 1];
        int R2 = (j == n) ? INT_MAX : arr2[j];

        if (L1 <= R2 && L2 <= R1) {
            if ((m + n) % 2 == 0)
                return (max(L1, L2) + min(R1, R2)) / 2.0;
            else
                return max(L1, L2);
        } else if (L1 > R2)
            high = i - 1;
        else
            low = i + 1;
    }

    return 0;
}

int main() {
    vector<int> arr1 = {1, 3};
    vector<int> arr2 = {2, 4, 5};
    cout << findMedianSortedArrays(arr1, arr2);
}