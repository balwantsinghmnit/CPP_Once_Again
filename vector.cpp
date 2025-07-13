#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3};
    int *ptr=new int;
    *ptr = v1[2];
    vector<int>::iterator a = v1.begin();
    cout<<*(a)<<endl;
    return 0;
}