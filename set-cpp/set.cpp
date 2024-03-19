#include<iostream>
#include<set>

using namespace std;

int main(){
	int n;
	set<int> s;
	cout<<"Nhap do dai cua Set: ";
	cin>>n;
	cout<<"Nhap cac phan tu cua Set:"<<endl;
	for(int i=0;i<n;i++){
		int n; cin>>n;
		s.insert(n);
	}
	cout<<"so phan tu cua Set: "<<s.size()<<endl;
	cout<<"Sap xep cac mang cua set: ";
//	for(int i=0;i<s.size();i++){
//		cout<<s[i]<<" ";
//	}
	for(int i : s){
		cout<< i<< " ";
	}
	cout<<endl;
	cout<<*s.begin()<<endl;
	cout<<*s.end()<<endl;
	cout<<*s.rbegin()<<endl;
	return 0;
}
