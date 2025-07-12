#include<iostream>
using namespace std;

void PrintPyramid(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if((j>=n-i-1 && j<=n+i-1)){
                if(n%2==1 && ((j%2==0 && i%2==0)||(j%2==1 && i%2==1)))
                    cout<<"*";
                else if(n%2==0 && ((j%2==1 && i%2==0)||(j%2==0 && i%2==1)))
                    cout<<"*";
                else
                    cout<<" ";
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

    PrintPyramid(n);

    return 0;
}