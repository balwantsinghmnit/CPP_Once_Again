#include<iostream>
#include<vector>
using namespace std;

void Merge(int arr[], int start, int mid, int end){
    int i = start, j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    //storing sorted elements in original array
    for(i=0;i<temp.size();i++){
        arr[i+start] = temp[i];
    }
}

void MergeSort(int arr[],int start, int end){
    if(start<end){
        int mid = start + (end-start)/2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid+1, end);
        Merge(arr, start, mid, end);
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
    MergeSort(arr,0, n-1);
    cout<<"Sorted: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}