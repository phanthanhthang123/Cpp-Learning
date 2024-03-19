#include<iostream>
#include<map>

using namespace std;

int main(){
	map<int,int> mp;
	mp.insert({400,500});
	mp[100]= 200;
	mp[200]=300;
//	mp[300]= 100;
	mp.insert({300,400});
//	mp.insert({400,500});
	
//	for(pair<int,int> x : mp){
//		cout<<x.first <<" "<<x.second<< endl;
//	}
//	for(auto x: mp){
//		cout<<x.first << " "<<x.second <<endl;
//	}
//
for(map<int,int>::iterator it = mp.begin(); it !=mp.end();it++){
	cout<<(*it).first<<" "<<(*it).second<<endl;
	
}	
	cout<<mp.size()<<endl;
	
	return 0;
} 
