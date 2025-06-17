#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int , 3> arr={'G','f','G'};  // ASCII val of 'G' =71 
    array <int , 3> arr1={'M','M','P'}; // ASCII val of 'M' = 77 and 'P' = 80
    cout << "Arr: ";
    for(auto x: arr){
        cout << char(x) << " ";
    }
    cout <<endl;
    cout <<"Arr1: ";
    for(auto x: arr1){
        cout << char(x) << " ";
    }
    cout <<endl;
    arr.swap(arr1);  // now arr = {M,M,P}
    cout << " After swapping\nArr: ";
    for(auto x: arr){
        cout << char(x) << " ";
    }
    cout <<endl;
    cout <<"Arr1: ";
    for(auto x: arr1){
        cout << char(x) << " ";
    }
    cout <<endl;
    cout << "front of arr: "<<char(arr.front())<<" front of arr1: "<<char(arr1.front())<<endl;
    cout << "back of arr: "<<char(arr.back())<<" back of arr1: "<<char(arr1.back())<<endl;
    return 0;
}