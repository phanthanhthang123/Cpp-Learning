#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	
	for(int i=0;i<v.size();i++){
		cout<< v[i]<<endl;
	}
//	for(int i : v){
//		cout<<i<<endl;
//	}
	cout << v[1]<<endl;
	cout << *(v.begin()+1);
	return 0;
}
