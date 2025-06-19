// C++ Program to show how to use std::lower_bound()
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};
    vector<int> arr3 = {10, 15, 25, 30, 35};
  
    int val = 20;

    // using lower_bound() to check if val exists
    // in arr1, single occurrence, prints 2
    int lower_bound_for_20 =  lower_bound(arr1.begin(), arr1.end(), val) - arr1.begin();
    cout <<arr1[lower_bound_for_20]<< endl;

    // using lower_bound() to check if val exists
    // in arr2, multiple occurrence , prints 2
    lower_bound_for_20 =  lower_bound(arr2.begin(), arr2.end(), val)- arr2.begin();
    cout <<arr2[lower_bound_for_20]<<endl;

    // using lower_bound() to check if val exists
    // in arr3, no occurrence , prints 2 
    // ( index of next higher)
    lower_bound_for_20 = lower_bound(arr3.begin(), arr3.end(), val) - arr3.begin();
    cout <<arr3[lower_bound_for_20]<< endl;
  return 0;
}