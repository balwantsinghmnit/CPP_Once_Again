#include<iostream>
using namespace std;

int main(){
    auto result = [](int m) {
        return m*m;
    };
    int x=5,y=10;
    auto Fun1 = [&x,&y](){
        x+=1;
        y+=1;
    };
    cout << "Enter an integer number : ";
    int num;
    cin >> num;
    cout << "Number : " << num << "  Square : " << result(num) << endl;
    cout << "x : " << x << "  y : " << y << endl;
    Fun1();
    cout << "x : " << x << "  y : " << y << endl;
    return 0;
}