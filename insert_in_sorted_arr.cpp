// {4,2,3,1,5} we have unsorted array
// after sorted {1,2,3,4,5} 
// we have to insert 6 in index of 2 

#include<iostream>
using namespace std;
int base(int arr[], int n){
    n +=1;
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<endl;
    }
}
int sort(int arr[],int n){
    for(int i=0; i<=n; i++){
        for(int j=i+1; j<n; j++){
        if(arr[j]<=arr[i]){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            }
        }
    }
    for(int j=0; j<n; j++){
        cout<<arr[j]<<endl;
    }
}
int func(int arr[],int element,int n, int index, int capacity){
    if(n>=capacity){
        return -1;
    }
    for (int i = n; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    
}
int main(){
    int arr[20] = {4,2,3,1,5};
    int n=5,index=2,element=6;

    sort(arr,n);

    func(arr,element,n,index,20);

    cout<<"after insertion:"<<endl;
    base(arr,n);
}