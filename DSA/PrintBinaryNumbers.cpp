#include<iostream>
using namespace std;

void Binary(string A, int n){
    if(n<1){
        cout<<A<<endl;
    } else{
        A[n-1]='0';
        Binary(A,n-1);
        A[n-1]='1';
        Binary(A,n-1);
    }
}

int main(){
    int n;
    cout<<"How many digits binary number you want to print: ";
    cin>>n;
    string A(n,'-');
    Binary(A, n);
    return 0;
}