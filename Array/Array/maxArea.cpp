#include<iostream>
#include<vector>

using namespace std;

int containerWithMostWater(vector<int>&arr){
    int max=INT_MIN;
    for(int i=0; i<arr.size(); i++){
        for(int j=1; j<arr.size(); j++){
            if((min(arr[i],arr[j])*abs(i-j))>max){
                max=min(arr[i],arr[j])*abs(i-j);
            }
        }
    }

    return max;
}


int main(){
    vector<int> arr={1,8,6,2,5,4,8,3,7};
    int max=containerWithMostWater(arr);
    cout << "The max area is " << max ;
    return 0;
}
