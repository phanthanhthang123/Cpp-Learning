#include<iostream>
#include<set>
//#include<unordered_set>

using namespace std;
//dem so ptu khac nhau trong set

int main(){
	set<int> s;
	int n; cin>>n;
	cin.ignore();
//	unordered_set<int>s;
//	for(int i=0;i<n;i++){
//		int x; cin>>x;
//		s.insert(x);
//	}
//	cout<<"So ptu khac nhau trong mang la: "<<s.size()<<endl;
	set <string> sett;
	for(int i= 0 ;i<n;i++){
		string str;
		getline(cin,str);
		sett.insert(str);
	}	
	
	cout<<"so chuoi khac nhau trong set la :" << sett.size()<<endl;
	for(auto x: sett){
		cout<<x<<" ";
	}
	return 0;
}
