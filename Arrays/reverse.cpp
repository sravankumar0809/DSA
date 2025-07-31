#include<iostream>
using namespace std;

int reverse(int arr[],int size){
int left=0;
int right = size-1;
    while(left < right){
        swap(arr[left++],arr[right--]);
    }
}

 int main(){
    int arr[]={1,2,3,4,5};
    int size = 5;
    reverse(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
 }