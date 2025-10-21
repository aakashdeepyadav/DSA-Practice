#include<iostream>
#include<vector>
using namespace std;


int searchInsertPosition(vector<int>&arr, int target){
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

    return low;
}

int main(){
    vector<int> arr={1,2,3,4,4,5,8};
    int target=7;
    int SearchedIndex=searchInsertPosition(arr,target);
    
    cout << "The searched Insert Position is at index " << SearchedIndex;

    return 0;
}
