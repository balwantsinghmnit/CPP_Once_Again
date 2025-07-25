#include<iostream>
using namespace std;

void PrintPascalTriangle(int n){
    int arr[n][n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    PrintPascalTriangle(n);

    return 0;
}