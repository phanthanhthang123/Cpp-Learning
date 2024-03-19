#include<iostream>
#include<string>

using namespace std;

class Student{
public:
	string name;
	int age;
	Student(){};
	Student(string name,int age){
		this->age=age;
		this->name=name;
	};
	void print(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}
};

int main() {
	string name;
	int age;
	getline(cin,name);
	cin>>age;
	Student student_1(name,age);
	student_1.print();
	return 0;
}
