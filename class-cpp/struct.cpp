#include<iostream>
#include<string>

using namespace std;

struct Student {
	string name;
	int age;
	void input(){
		cin>>name;
		cin>>age;
	}	
};

void input_n(int &n){
	cin>>n;
	cin.ignore();
}

int main() {
	int n;
	input_n(n);
	struct Student *array = new Student[n];
	for(int i=0;i<n;i++){
		cin>>array[i].name;
		cin>>array[i].age;
	}
	for(int i=0;i<n;i++){
		cout<<"Name: "<<array[i].name<<endl;
		cout<<"Age: "<<array[i].age<<endl;
	}
	
	delete[] array;
	return 0;
}
