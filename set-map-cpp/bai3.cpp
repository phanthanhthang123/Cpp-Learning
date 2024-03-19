#include<bits/stdc++.h>

//Nhung phan tu thuoc mang 1 mà không thuoc mang 2
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		set<int>s1;
		set<int>s2;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			s1.insert(x);
		}
		for(int i=0;i<m;i++){
			int x;cin>>x;
			s2.insert(x);
		}
		rest:
		for(auto x : s1){
			for(auto y : s2){
				if(x==y){
					s1.erase(x);
					goto rest;
				}
			}
		} 
		if(s1.size()==0){
			cout<<"NOT FOUND!";
		}else{
			for(auto x: s1){
				cout<<x<<" ";
			}
		}
		
	}
	return 0;
} 
