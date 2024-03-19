#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	int array[n];
	for(int &x : array){
		cin>>x;
	}
	for(auto x: array){
		cout<<x<<" ";
	}
	
	return 0;
} 
