#include<iostream>
using namespace std;

template <typename T> T GCD(T a, T b){
    T big, small;
    big = b;
    small = a;
    if(a>b){
        big = a;
        small = b;
    }

    while(big%small!=0){
        T temp = big;
        big = small;
        small = temp%small;
    }
    return small;
}

int main(){
    cout << "Enter two numbers to find GCD\n";
    int num1, num2;
    cin >> num1>>num2;
    int result = GCD(num1,num2);
    cout <<"Num1: " << num1 << "  Num2: " << num2 << "  GCD: "<< result<<endl;
    return 0;
}