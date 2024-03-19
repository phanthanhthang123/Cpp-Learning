#include<bits/stdc++.h>
//Tìm kiem phan tu trong mang
using namespace std;

//int main(){
//	int t;cin>>t;
//	while(t--){
//		int n;cin>>n;
//		set<int> s;
//		for(int i=0;i<n;i++){
//			int x;cin>>x;
//			s.insert(x);
//		}
//		
//		int q;cin>>q;
////		for(int i=0;i<q;i++){
////			int x;cin>>x;
////			if(s.find(x) != s.end()){
////				cout<<"YES!"<<endl;
////			}else{
////				cout<<"NO!"<<endl;
////			}
////		}
//		while(q--){
//			int x;cin>>x;
//			if(s.count(x) != 0){
//				cout<<"YES!"<<endl;
//			}
//			else{
//				cout<<"NO!"<<endl;
//			}
//		}
//	}
//	return 0;
//}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,bool> mp;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			mp[x] = true;
		}
		int q;cin>>q;
		while(q--){
			int x;cin>>x;
			if(mp.count(x) == 1){
				cout<<"YES!"<<endl;
			}
			else{
				cout<<"NO!"<<endl;
			}
		}
	}
	return 0;
}
