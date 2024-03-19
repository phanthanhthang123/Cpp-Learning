#include<iostream>
#include<string>

using namespace std;

void input_array(int *array, int n){
 	for(int i = 0;i<n;i++){
 		cin>>array[i];
	 }
 }
void input_interger(string laber , int &n ){
 	cout<<laber;
 	cin>>n;
 }
void print_array(int *arr,int size){
 	for(int i=0;i<size;i++){
 		cout<<arr[i]<<" ";
	 }
 }
void add(int* &arr,int &size,int &x,int &y){
	int new_size= size+1;
	int *new_array = new int[new_size];
	for(int i =0;i<new_size-1;i++){
		new_array[i]= arr[i];
	}
	for(int i= new_size-1;i>x;i--){
		new_array[i] = new_array[i-1];
	}
	new_array[x]=y;
	
	delete[] arr;
	arr=new_array;
	size=new_size;
}
int main(){
	int n,y,x;
	input_interger("n = ", n);
	int *arr = new int[n];
	
	cout<<"Nhap mang: ";
	input_array(arr,n);
	
	cout<<"y = ";
	cin>>y;
	
	input_interger("x = ", x);
	cout<<"Mang sau khi them la: ";
	add(arr,n,x,y);
	print_array(arr,n);
	
	return 0;	
}
