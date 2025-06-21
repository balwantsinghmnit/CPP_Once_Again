#include<iostream>
using namespace std;

//Kadane's algo to find max subarray sum in O(n) time

int GetMaxSum(int arr[], int n){
    int current_sum = 0, max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        current_sum += arr[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum<0)
            current_sum=0;
    }
    return max_sum;
}

int main(){
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    cout << GetMaxSum(arr1,7)<<endl;
    int arr2[] = {-2, -4};
    cout << GetMaxSum(arr2,2)<<endl;
    int arr3[] = {5, 4, 1, 7, 8};
    cout << GetMaxSum(arr3,5)<<endl;
    return 0;
}