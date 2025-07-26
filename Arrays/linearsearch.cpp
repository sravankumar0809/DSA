#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    int arr[]={4,5,6,7,3,1,23,56,11};
    int size = sizeof(arr)/sizeof(int);
    int target = 56;
     cout<<"Target found at the index : "<<linearSearch(arr,size,target);
}