#include<iostream>
#include<vector>

using namespace std;

int containerWithMostWater(vector<int>&height){
    int max=INT_MIN;
    for(int i=0; i<height.size(); i++){
        for(int j=1; j<height.size(); j++){
            if((min(height[i],height[j])*abs(i-j))>max){
                max=min(height[i],height[j])*abs(i-j);
            }
        }
    }

    return max;
}


int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int max=containerWithMostWater(height);
    cout << "The max area is " << max ;
    return 0;
}