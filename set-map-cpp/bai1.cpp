#include<iostream>
#include<set>
#include<map>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
//		set<int>s;
//		for(int i=0;i<n;i++){
//			int x;cin>>x;
//			s.insert(x);
//		}
//		cout<<s.size()<<endl;

		map <int,bool> mp;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			mp[x] = true;
		}
		cout<<mp.size()<<endl;
	}
	
	
	return 0;
} 
