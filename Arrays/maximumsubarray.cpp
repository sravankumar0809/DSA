#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    cout<<arr.size()<<endl;
    int sum=0,maxsum=0,start=-1,end=-1;
    for(int i=0;i<=arr.size();i++){
        for(int j=i;j<=arr.size();j++){
            for(int k=i;k<j;k++){
                cout<<arr[k];
                sum+=arr[k];
            }
            if(sum>maxsum){
                start=i;end=j-1;
                maxsum=max(sum,maxsum);
                
            }
            sum=0;
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<start<<" "<<end<<endl;
    cout<<maxsum;

}