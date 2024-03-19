#include<iostream>

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
 void remove(int* &arr,int &size, int index){
 	for(int i = index;i<size-1;i++){
 		arr[i]=arr[i+1];
	 }
	 int new_size=size-1;
	 int *new_array = new int[new_size];
	 for(int i=0;i<new_size;i++){
	 	new_array[i]=arr[i];
	 } 
	 delete[] arr;
	 arr=new_array;
	 size=new_size;
 }
int main(){
	int n,x;
	input_interger("n = ", n);
	int *arr = new int[n];
	
	cout<<"Nhap mang: ";
	input_array(arr,n);
	
	input_interger("x = ", x);
	cout<<"Mang sau khi xoa phan tu tai vi tri : "<<x<< " la :";
	remove(arr,n,x);
	print_array(arr,n);
	
	return 0;	
}
