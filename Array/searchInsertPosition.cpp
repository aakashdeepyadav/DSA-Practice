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


int searchInsertPosition(vector<int>&arr, int target){
    int size=arr.size();
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        
        if(arr[mid]<target && arr[mid+1]>target){
            return mid+1;
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
    int target=7;

    int SearchedIndex=binarySearch(arr, target);
    if(SearchedIndex==-1){
        SearchedIndex=searchInsertPosition(arr,target);
    }

    cout << "The searched Insert Position is at index " << SearchedIndex;

    return 0;
}
