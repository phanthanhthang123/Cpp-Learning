#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}
int main() {
	int a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	swap(&a,&b);
	
	cout<<"Sau khi swap thi a = "<<a<<", b = "<< b;
	
	return 0;
}
