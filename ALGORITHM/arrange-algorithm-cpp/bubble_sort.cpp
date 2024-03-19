#include<iostream>

using namespace std;
//thuat toan sap xep noi bot
void BubbelSort_1(int *array,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j] > array[j+1]){
				swap(array[j],array[j+1]);
			}
		}
	}
}

void BubbleSort_2(int *a,int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int n;cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
//	BubbelSort_1(a,n);
	BubbleSort_2(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}