#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int y = (x++,x++,++x);
    int z = (--x,++x,x++);
    cout << "x : "<< x << " y: " << y << " z: " << z <<endl;
    return 0;
}