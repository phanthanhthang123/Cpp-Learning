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
 void push(int* &arr,int &size,int new_element){
 	int new_size = size +1;
 	int *new_arr = new int[new_size];
 	
 	for(int i=0;i<size;i++){
 		new_arr[i]=arr[i];
	 }
	 new_arr[new_size-1]= new_element;
	 delete[] arr;
	 arr=new_arr;
	 size+=1;
	 
 }
int main(){
	int n,x;
	input_interger("n = ", n);
	int *arr = new int[n];
	
	cout<<"Nhap mang: ";
	input_array(arr,n);
	
	input_interger("x = ", x);
	push(arr,n,x);
	cout<<"Mang sau khi them: ";
	print_array(arr,n);
	
	
	return 0;	
}
