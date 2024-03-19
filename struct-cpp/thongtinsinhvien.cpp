#include<iostream> 
#include<string>

using namespace std;
struct SinhVien{
	string mssv;
	string name;
	float gpa;
	string dia_chi;
	
	void input(){
		cout<<"MSSV: ";
		cin>>mssv;
		cout<<"Name: ";
		cin.ignore();
		getline(cin,name);
		cout<<"Gpa: ";
		cin>>gpa;
		cout<<"Dia chi: ";
		cin.ignore();
		getline(cin,dia_chi);
	}
	
	void print(){
		cout<<"mssv: "<<mssv<<endl<<"Name: "<<name<<endl<<"Gpa: "<<gpa<<endl<<"Dia chi: "<<dia_chi;
	}
};
int main(){
	struct SinhVien a,b,c;
	cout<<"Nhap thong tin sinh vien a: "<<endl;;
	a.input();
	cout<<"Nhap thong tin sinh vien b: "<<endl;
	b.input();
	cout<<"Nhap thong tin sinh vien c: "<<endl;
	c.input();
	cout<<"Danh Sach thong tin cac sinh vien la "<<endl;
	a.print(); cout<<endl;
	b.print(); cout<<endl;
	c.print();cout<<endl;
}
