#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;
    int no_of_unique_element = 1;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nums[no_of_unique_element] = nums[i];
            no_of_unique_element++;
        }
    }
    return no_of_unique_element;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int no_of_unique_element = removeDuplicates(nums);

    cout << "No. of unique element = " << no_of_unique_element << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < no_of_unique_element; i++){
        cout << nums[i] << " ";

    }
    cout << endl;
    return 0;
}
