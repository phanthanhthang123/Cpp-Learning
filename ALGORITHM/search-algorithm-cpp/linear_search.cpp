#include<iostream>

//tim kiem nhi phan

using namespace std;

bool ls(int *array,int n,int x){
	for(int i=0;i<n;i++){
		if(array[i]==x) return true;
	}
	return false;
}

int main(){
	int n,x;cin>>n>>x;
	int arr[n];
	for(auto &x: arr){
		cin>>x;
	}
	if(ls(arr,n,x)){
		cout<<"Found!"<<endl;
	}
	else{
		cout<<"No found!"<<endl;
	}
	
	return 0;
} 
