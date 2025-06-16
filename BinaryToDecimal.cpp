#include<iostream>
using namespace std;

int main(){
    int result=0;
    string b;
    cout << "Enter binary number : ";
    cin>>b;
    int n = b.length();
    for(int i=0;i<n;i++){
        int value = b[n-i-1] - '0';
        int pow = 1;
        for(int j=0;j<i;j++){
            pow = pow * 2;
        }
        result += (value*pow);
    }
    cout << "Number : " << result << endl;
    return 0;
}