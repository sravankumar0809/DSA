#include<iostream>
using namespace std;

int main(){
    char ch='A';
    int n=4;
    for(int i=0;i<n;i++){
        ch=ch+i;
        for (int j=0;j<=i;j++){
            cout<<ch <<" ";
            ch--;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}