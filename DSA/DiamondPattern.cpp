#include<iostream>
using namespace std;

void PrintStar(int i, int j, int n){
    int mid_col = n-1;
    static int count=0;
    if(i<n && j==0){
        count+=1;
    }
    if(i>=n && j==0){
        count -=1;
    }
    if(j>=mid_col-count && j<=mid_col+count){
        if((n%2==0) && ((j%2==0 && i%2==1)||(j%2==1 && i%2==0))){
            cout<<"*";
        } else if((n%2==1) && ((j%2==1 && i%2==1)||(j%2==0 && i%2==0))){
            cout<<"*";
        } else {
            cout<<" ";
        }
    } else {
        cout<<" ";
    }
}

void PrintDiamondPyramid(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            PrintStar(i, j, n);
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintDiamondPyramid(n);

    return 0;
}