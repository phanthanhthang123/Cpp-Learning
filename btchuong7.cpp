#include<iostream>
#include<string>

using namespace std;

void input_interger(string label, int &n){
	cout<< label;
	cin>>n;
}
void input_array(int *arr,int size){
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}
void print_array(int *arr,int size){
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void push(int* &arr,int &size,int new_element){
	//tao 1 mang moi
	int new_size = size +1;
	int *tmp_arr = new int[new_size];
	//coppy 
	for(int i=0;i<size;i++){
		tmp_arr[i]= arr[i];
	}
	//them phan tu moi vao cuoi mang
	tmp_arr[new_size-1] = new_element;
	
	//gan sang con tro cu va tang size len 1 don vi
	delete[]arr;
	arr=tmp_arr;
	size=new_size;
}
void bt1(){
	int n,x;
	input_interger("n = ",n);
	int *numbers = new int[n];
	cout<<"Nhap mang: ";
	input_array(numbers,n);
	
	input_interger("x = ",x);
	push(numbers,n,x);
	cout<<"Mang sau khi them: ";
	print_array(numbers,n);
}
int main(){
	int n;
	rest:
		cout<<"Bai thuc hanh :";
		cin>>n;
	if(n<=0||n>4) goto rest;
	switch(n){
		case 1: bt1();
	//	case 2: bt2();
	//	case 3: bt3();
	//	case 4: bt4();
	}
	
	return 0;
}
