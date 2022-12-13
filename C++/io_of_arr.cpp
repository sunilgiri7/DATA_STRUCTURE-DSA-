#include<iostream>
using namespace std;
int main(){
	int row,cols;
	int x;
	cout<<"Enter size of array you wants to enter";
	cin>>row>>cols;
	int num[row][cols];
	for (int i=0; i<row; i++){
		for(int j=0; j<cols; j++){
			cin>>num[i][j];
		}
	}
	cout<<"Entered Elements is:\n";
	for(int i=0; i<row; i++){
		for(int j=0; j<cols; j++){
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"Enter any number you want to track inside array";
	cin>>x;
	for(int i=0; i<row; i++){
		for(int j=0; j<cols; j++){
			if(num[i][j]==x){
				cout<<"Number tracked in("<<i<<","<<j<<")";
			}
		}
		cout<<"\n";
	}
}
