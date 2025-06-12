#include <iostream>
using namespace std;

int main() {
    int No_Of_Mobile = 1;
    float Price = 19252.67;
    bool Liked = true;

    cout << typeid(No_Of_Mobile).name()<<endl;
    cout << typeid(Price).name()<<endl;
    cout << typeid(Liked).name()<<endl;
    return 0;
}