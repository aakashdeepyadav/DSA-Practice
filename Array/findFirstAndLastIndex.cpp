#include<iostream>
#include<vector>
using namespace std;

int findFirstIndex(vector<int>&arr, int target){
    int size=arr.size();
    int low=0;
    int high=size-1;
    int firstIndex=-1, lastIndex=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            firstIndex=mid;
            high=mid-1;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return firstIndex;
}

int findLastIndex(vector<int>&arr, int target){
    int size=arr.size();
    int low=0;
    int high=size-1;
    int firstIndex=-1, lastIndex=-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==target){
            lastIndex=mid;
            low=mid+1;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return lastIndex;
}

vector<int> findFirstAndLastIndex(vector<int>&arr, int target){
    int first=findFirstIndex(arr,target);
    int last=findLastIndex(arr,target);

    return {first, last};
}

int main(){
    vector<int> arr={1,2,3,4,4,5,8};
    int target=8;
    vector<int> findAt=findFirstAndLastIndex(arr,target);

    if(findAt[0]==-1){
        cout << target<< " is not found in the given array";
    }else{
        cout << target<< " is found at [" << findAt[0]<<","<<findAt[1]<< "] in the given array";
    }

    return 0;
}
