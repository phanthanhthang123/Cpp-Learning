#include<string>
#include<iostream>

using namespace std;
class Name;
void input_n(int &n);
void print(Name *arr,int n);
void scan(Name *arr,int n);

class Name{
	private:
	string name;
	
	friend void print(Name *arr,int n);
	friend void scan(Name *arr,int n);	
	friend void rest_name(Name *array,int n);
};

void print(Name *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i].name;
		cout<<endl;
	}
}

void scan(Name *arr,int n){
	for(int i=0;i<n;i++){
		getline(cin,arr[i].name);
	}
}

void input_n(int &n){
	cin>>n;
	cin.ignore();
}

void rest_name(Name *array,int n){
	for(int i=0;i<n;i++){
		array[i].name[0]= toupper(array[i].name[0]);
		for(int j=1;j<array[i].name.length();j++){
			if(array[i].name[j] == ' ' && array[i].name[j+1] != ' '){
				array[i].name[j+1]= toupper(array[i].name[j+1]);
			}
		}
	}
}

int main(){
	int n;
	input_n(n);
	class Name *array = new Name[n];
	scan(array,n);
	rest_name(array,n);
	print(array,n);
	delete[]array;
	return 0;
}


