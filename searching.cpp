#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int s){
    for(int i=0; i<=n; i++){
        if(arr[i] == s){
            cout<<"Element found at:"<<i<<endl;
        }else{
            cout<<"Not found at:"<<i<<endl;
        }
    }
}
int main(){
    int arr[] = {4,2,545,33,4,5,2,6,8,5,47,6,45};
    int n = sizeof(arr)/sizeof(int);

    linearSearch(arr, n,5);
}
