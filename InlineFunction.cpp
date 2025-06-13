#include<iostream>
using namespace std;

inline int GetSquare(int m) {
    return m*m;
}

int main(){
    cout << "Enter an integer number : ";
    int num;
    cin >> num;
    int result = GetSquare(num);
    cout << "Number : " << num << "  Square : " << result << endl;
    return 0;
}