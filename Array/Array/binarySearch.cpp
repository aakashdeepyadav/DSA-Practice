#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&arr, int target){
    int size=arr.size();

    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr={1,2,3,4,4,5,8};
    int target=3;
    int findAt=binarySearch(arr,target);

    if(findAt==-1){
        cout << target<< " is not found in the given array";
    }else{
        cout << target<< " is found at index " << findAt<<" in the given array";
    }

    return 0;
}
