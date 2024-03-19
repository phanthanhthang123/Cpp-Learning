#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;cin>>n;
	int array[n];
	for(int &x : array){
		cin>>x;
	}
	
	sort(array,array+n);
	for(auto x : array){
		cout<<x<<" ";
	}
	sort(array,array+n,greater<int>());
	cout<<endl;
	
	for(auto x : array){
		cout<<x<<" ";
	}
	return 0;
}
