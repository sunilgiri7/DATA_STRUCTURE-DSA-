#include<iostream>
using namespace std;
void base(int arr[],int n){
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<endl;
    }
}
void func(int arr[],int n, int index){
    for(int i=index; i<=n; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[10] = {4,2,3,1,5};
    int n=3;

    func(arr,n,2);

    base(arr,n);
}