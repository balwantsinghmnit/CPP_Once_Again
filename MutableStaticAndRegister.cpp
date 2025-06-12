#include<iostream>
using namespace std;

class A {
    public:
        int x;
        mutable int y;

        A(){
            x=5;
            y=10;
        }
};

int GetNewNumber(){
    static int num = 0;
    num = num + 5;
    return num;
}

int main(){
    register int z = GetNewNumber();
    const A obj1;
    cout << "x : " << obj1.x << " y : " << obj1.y << " z : " << z << endl;
    obj1.y = 12;
    z = GetNewNumber();
    cout << "x : " << obj1.x << " y : " << obj1.y << " z : " << z << endl;
    return 0;
}