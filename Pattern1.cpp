#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows : ";
    cin >>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            cout << (i+j) << " ";
        }
        cout <<endl;
    }
    return 0;
}

/*
0 1 2 3 
1 2 3 4 
2 3 4 5 
3 4 5 6 
*/