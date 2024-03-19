#include<iostream>
#include<string>
using namespace std;

void bt1();
void bt2();
void bt3();
void bt4();


int main(){
	int n;
	rest:
	cout<<"Bai thuc hanh: ";
	cin>>n;
	if(n<=0||n>4) goto rest;
	
	switch(n){
		case 1: bt1();break;
		case 2: bt2();break;
		case 3: bt3();break;
		case 4: bt4();break;
	}	
	return 0;
}

void bt1(){
	string str;
	cout<<"Nhap chuoi :";
	cin.ignore();
	getline(cin,str);
	for(int i=0;i<str.length();){
		if(str[i]==' ') str.erase(i,1);
		if(str[i] !=' ') break;
	}
	for(int i= str.length() -1;i>0;i--){
		if(str[i]==' ') str.erase(i,1);
		if(str[i] !=' ') break;
	}
	cout<<"Ket qua:"<<str;	
}
void bt2(){
	string str;
	cout<<"Nhap chuoi : ";
	cin.ignore();
	getline(cin,str);
	int i=0;
	while(i<str.length()){
		if(str[i]==' ' && str[i+1]==' '){
			str.erase(i,1);
		}
		else{
			i++;
		}
	}
	cout<<"Ket qua:"<<str;
}
void bt3(){
	
	
}
void bt4(){
	string str;
	//cout<<"Nhap chuoi: ";
	cin.ignore();
	getline(cin,str);
	int i=0;
	
	while(i<str.length()){
		if(str[i]==' '&& str[i+1]==' '){
			str.erase(i,1);
		}
		else{
			i++;
		}
	}
	if(str[0]==' ') str.erase(0,1);
	if(str[str.length()-1]==' ') str.erase(str.length()-1,1);
	
	for(int i=0;i<str.length();i++){
		str[i]=tolower(str[i]);
	} 
	str[0]=toupper(str[0]);
	for(int i=0;i<str.length();i++){
		if(str[i]==' '&& str[i+1] != 0){
			str[i+1]=toupper(str[i+1]);
		}
	}
	
	cout<<str;
}
