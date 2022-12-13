// Iterative method
#include<iostream>
using namespace std;
class fact{
	int n,f;
	public:
	void factorial(){
		f = 1;
		cout<<"Enter any number:";
		cin>>n;
		for(int i=1; i<=n; i++){
			f = f*i;
		}
		cout<<"Factorial is: "<<f;
	}
};
int main(){
	fact f1;
	f1.factorial();
}
