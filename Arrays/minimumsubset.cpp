#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int main(){
    vector<int> arr={3,4,5,4,1,7,8};
    
    int sum=0;
    for (int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            int minimum=INT_MAX;
            for(int k=i;k<=j;k++){
                cout<<arr[k];
                minimum=min(minimum,arr[k]);
            }
            cout<<" ";
            sum+=minimum;
        }
        cout<<endl;
    }
cout<<sum<<endl;
}