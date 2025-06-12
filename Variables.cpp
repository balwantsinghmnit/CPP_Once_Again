#include <iostream>
using namespace std;

int main() {
    //defining variables
    int num1 = 10;
    const int num2 = 10;
    //printing values of variables
    cout << "Num1 : " << num1 << "   Num2 : " << num2 << endl;
    //changing values
    num1 = 20;
    //num2 = 20; can't be changed as constant variable
    //printing values of variables
    cout << "Num1 : " << num1 << "   Num2 : " << num2 << endl;
    return 0;
}