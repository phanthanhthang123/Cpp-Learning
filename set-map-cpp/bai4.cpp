#include<bits/stdc++.h> 
//so có so lan xuat hien nhieu nhat trong mang
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		map<int,int> mp;
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			mp[x]++;
		}
		int max = 1;
		for(auto x : mp){
			if(x.second > max){
				max = x.second;
			}
		}
		for(auto x : mp){
			if(max == x.second){
				cout<<x.first<<" "<<x.second;
			}
		}
	}
	return 0;
}
