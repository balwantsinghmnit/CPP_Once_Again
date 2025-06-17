#include<iostream>
using namespace std;

int main(){
    
    if(int num=50; num>40){
        cout << "Greater than 40\n";
    } else if(num>20) {
        cout <<"Greater than 20 but less than 40\n";
    } else {
        cout <<"Less than 20\n";
    }

    switch(int num=2){
        case 1:
            cout << "case 1\n";
            break;
        case 2:
            cout << "case 2\n";
            break;
        case 3:
            cout << "case 3\n";
            break;
        default:
            cout << "default case\n";
    }
    
    return 0;
}

/// this program will work only in C++17