#include<iostream>
using namespace std;

int main(){
    int n=4;
    for( int i =0;i<n;i++){
        for ( int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<2*i-1;j++){
            cout<<" ";
        }
        if(i!=0)
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=0;j<(2*(n-2-i)-1);j++){
            cout<<" ";
        }
       if(i+1!=n-1){
        cout<<"*";

       }
        cout<<endl;
    }
}