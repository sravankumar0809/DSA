#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={3,-4,5,4,-1,7,-8};
    cout<<"size of the array : "<<arr.size()<<endl;
    int sum=0,maxsum=0,start=0,end=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
       
        if(sum>maxsum){
            maxsum=sum;
            end=i;              //KADANES ALGORITHM  ... WHEN EVER THE SUM REACHES -1 SIMPLY SET IT TO 0
        }
         if(sum<0){
            sum=0;             //WRITING THIS CASE AFTER CHECKING FOR THE MAXIMUM IN ORDER TO  FIND THE GREATEST IN A COMPLETE NEGATIVE ELEMENTS ARRAY
            start=i+1;
        }
    }
    cout<<start<<" "<<end<<endl;
    cout<<"maximum sum : "<<maxsum;

}