#include<iostream>
using namespace std;

void PrintInvertedPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if((j>=i && j<=2*n-i-2) && ((j%2==0 && i%2==0)||(j%2==1 && i%2==1))){
                cout<<"*";
            } else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintInvertedPyramid(n);

    return 0;
}