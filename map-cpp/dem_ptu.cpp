#include<iostream>
#include<map>

using namespace std;

int main(){
	int n;cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		mp[x]++;// neu key x chua xuat hien trong map thi mp[x] = 0; ==>>  mp[x]++;
	}
	for(pair<int,int> x : mp){
		cout<<x.first<<" "<<x.second<<endl;
	}
	
	return 0;
}
