#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int element){
    int high = size-1;
    int low=0;
    int mid = (low+high)/2;
    
    while (low<=high){
    if(arr[mid]== element){
        return mid;
    }else{
        if(arr[mid]<=element){
            low = mid-1;
        }
    }
    }
    return -1;
}
int main(){
    // Sorted array for binary search
    int arr[] = {1,3,4,7,88,99,342,445};
    int size = sizeof(arr)/sizeof(int);
    int element = 342;

    int ans = binarySearch(arr,size,element);
    cout<<"Element "<<element<<"found at:"<<ans;
}