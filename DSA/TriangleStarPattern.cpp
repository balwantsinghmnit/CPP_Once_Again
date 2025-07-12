#include<iostream>
using namespace std;

void PrintTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintTriangle(n);

    return 0;
}