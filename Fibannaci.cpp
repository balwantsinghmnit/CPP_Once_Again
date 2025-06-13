#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1;
    cout << "Enter number of terms : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << a << " ";
        a = a+b;
        b = a-b;
        a = a-b;
        b=a+b;
    }
    return 0;
}

/*
0 1 1 2 3 5 8 13 21 34 ......
*/