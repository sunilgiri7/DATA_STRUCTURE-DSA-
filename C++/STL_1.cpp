#include<iostream>
#include<array>
using namespace std;
int main(){
	int basic[3] = {1,2,3};
	array<int,4> a = {1,2,3,4};
	int size = a.size();
	for(int i=0; i<=size; i++){
		cout<<basic[i]<<endl;
	}
	
	cout<<"Elements at 2nd Index"<<a.at(2)<<endl;
	
	cout<<"Empty or not"<<a.empty()<<endl;
}
