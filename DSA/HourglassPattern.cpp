#include<iostream>
using namespace std;

void PrintHourglass(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            if(i<n && j>=i && j<=2*n-i-2){
                cout<<"*";
            } else if(i>=n && j>=2*n-i-2 && j<=i){
                cout<<"*";
            } else {
                cout <<" ";
            }
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintHourglass(n);

    return 0;
}