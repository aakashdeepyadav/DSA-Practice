#include<iostream>
#include<vector>

using namespace std;

int removeElementInPlace(vector<int>&arr, int val){

    int i=0;
    for(int j=0; j<arr.size();j++){
        if(arr[j]!=val){
            arr[i]=arr[j];
            i++;
        }

    }

    arr.resize(i);
    return arr.size();
}

int main(){
    int value=3;
    vector<int> array={3,1,4,6,3,7,5,3,7,2};
    cout << "The remaining element is " << removeElementInPlace(array,value)  << endl;

    for(int i=0; i<array.size(); i++){
        cout << array[i] << " ";
    }
    return 0;
}
