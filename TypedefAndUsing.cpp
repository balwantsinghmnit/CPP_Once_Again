#include<iostream>
using namespace std;

typedef float fl;
using lli = long long int;

int main(){
    fl num1 = 34.129;
    lli num2 = 1483923;

    cout << "num1 : " << num1 << " Size : " << sizeof(num1) <<endl;
    cout << "num2 : " << num2 << " Size : " << sizeof(num2) <<endl;
    
    return 0;
}