#include<iostream>
using namespace std;
int main(){
	int n,flag=0,m=0,i;
	cout<<"Enter any number:";
	cin>>n;
	m=n/2;
	for(i=2; i<m; i++){
		if (n%i==0)
		{
			cout<<"number is not prime\n";
			flag=1;
			break;
		}
	}
	if (flag==0)
	cout<<"number is prime";
}
