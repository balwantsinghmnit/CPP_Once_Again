#include <iostream>
using namespace std;

int No_Of_Mobile = 1;

int main() {
    int No_Of_Mobile = 2;
    cout << "Value : " << No_Of_Mobile << endl;
    No_Of_Mobile = 5;
    cout << "Value : " << No_Of_Mobile << endl;
    //accessing global variable
    cout << "Value : " << ::No_Of_Mobile << endl;
    return 0;
}