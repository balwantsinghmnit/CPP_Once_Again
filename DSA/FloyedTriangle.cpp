#include<iostream>
using namespace std;

void PrintFloyedTriangle(int n){
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<count++<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintFloyedTriangle(n);

    return 0;
}