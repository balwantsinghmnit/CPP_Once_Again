#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int Partition(int arr[], int start, int end){
    int pivot_index = start-1, pivot_element=arr[end];
    for(int i=start;i<end;i++){
        if(arr[i]<=pivot_element){
            pivot_index += 1;
            swap(arr[i],arr[pivot_index]);
        }
    }
    pivot_index += 1;
    swap(arr[end], arr[pivot_index]);
    return pivot_index;
}

void QuickSort(int arr[],int start, int end){
    if(start<end){
        int pivot = Partition(arr, start, end);
        QuickSort(arr, start, pivot-1);
        QuickSort(arr, pivot+1, end);
    }
}

int main() {
    int n;
    cout << "how many numbers to sort?: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" numbers\n";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    QuickSort(arr,0, n-1);
    cout<<"Sorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}