#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    int *ptr = arr+4;
    *ptr = 5;
    cout<<sizeof(arr)<<endl;
    return 0;
}