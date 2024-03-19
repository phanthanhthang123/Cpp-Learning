#include<iostream>
#include<string>


using namespace std;

struct Name{
	string name;
	
	void input_name(){
		getline(cin,name);
	}
	void output_name(){
		cout<<name;
	}
	void rest_name(){
		name[0] = toupper(name[0]);
		for(int i=1;i<name.length();i++){
			if(name[i] ==' ' && name[i+1] != ' '){
				name[i+1] = toupper(name[i+1]);
			}
		}
	}
};

void input(int &n){
	cin>>n;
	cin.ignore();
}
int main(){
	int a;
	input(a);
	string array[a];
	for(int i=0;i<a;i++){
		struct Name sv;
		sv.input_name();
		sv.rest_name();
		array[i] = sv.name;
	}
	cout<<"Blacklist cua PTT : " <<endl;
	for(int i =0;i<a;i++){
		cout<<array[i];
		if(i<a-1) cout<<endl;
	}
	return 0;
}
