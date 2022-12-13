#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[n];
	cout<<"how many number of elemens you want to sort";
	cin>>n;
	cout<<"Enter your elements/n";
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[i]){
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
