#include<iostream>
#include<vector>
using namespace std;

int minOperations(vector<int> arr, int k){
    int sum=0;

    for(int x: arr){
        sum+=x;
    }

    int rem = sum%k;
    if(rem==0){
        return 0;
    }

    return rem;
}

int main(){
    vector<int> vec={2,4,5};
    int k=3;

    int numOfOp=minOperations(vec,k);

    cout << "The minimum operation to perform is " << numOfOp ;
    return 0;
}