#include<iostream>
#include<string>
#include<vector>

using namespace std;
struct Name{
	string name;
	void print_name(){
		cout<<name<<endl;
	}
	void rest_name(){
		name[0] = toupper(name[0]);
		for(int i=0;i < name.length();i++){
			if(name[i]==' ' && name[i+1]!= ' '){
				name[i+1]= toupper(name[i+1]);
			}
		}
	}
	void scan_name(){
		getline(cin,name);
	}
};
int main(){
	int n;
	cin>>n;
	cin.ignore();
	Name *array = new Name[n];
	vector <string> v;
	for(int i=0;i<n;i++){
		array[i].scan_name();
		array[i].rest_name();
		v.push_back(array[i].name);
//		array[i].print_name();
	}
	
//	for(int i=0;i<v.size();i++){
//		cout<<v[i]<<endl;
//	}
//	
	for(auto x : v){
		cout<<x<<endl;
	}
	delete[]array;
	return 0;
}
