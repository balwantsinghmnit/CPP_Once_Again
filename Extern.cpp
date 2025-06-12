#include<iostream>
using namespace std;

extern int value; // telling compiler that value is defined elsewhere , compile value.cpp file with it and run
extern int DoubleIt(int num);

int main(){
    cout << "Value : "<< value<<endl;
    value = 15;
    cout << "Value : "<< value<<endl;
    value = DoubleIt(value);
    cout << "Value : "<< value<<endl;
    return 0;
}