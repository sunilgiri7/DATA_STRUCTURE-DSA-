#include<iostream>
using namespace std; 
void display(int arr[], int n){
    // Traversal
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<endl;
    }
}

int indInsertion(int arr[], int n, int element,int capacity,int index){
    if(n>=capacity){
        return -1;
    }
    for(int i=n; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

int main(){
    int arr[50] = {3,2,5,4,6};
    int n=4, element=45,index=1;
    display(arr,n);
    indInsertion(arr,n,element,50,index); 
    n +=1;
    cout<<"After insertion"<<endl;
    display(arr,n);
    return 0;

}
