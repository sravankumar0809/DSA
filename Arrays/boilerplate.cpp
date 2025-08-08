#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr1={1,2,3,4};
    vector<int> arr2={5,6,7,8};
    vector<int> arr;
    for(int x : arr1){
        arr.push_back(x);
    }
    for(int x : arr2){
        arr.push_back(x);
    }
    cout<<"merged array"<<endl;
    for(int x : arr){
        cout<<x<<" ";
    }
}