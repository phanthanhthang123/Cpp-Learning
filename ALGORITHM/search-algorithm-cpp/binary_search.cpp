#include<iostream>

// tim kiem nhi phan
// mang duoc sap xep tu be den lon

using namespace std;
//theo ham
bool bs(int *array,int n, int x){
	int l=0; int r=n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(array[m]==x) return true;
		else if(x>array[m]){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return false;
}
//de qui
bool binary_search(int *array,int l,int r,int x){
	if(l>r) return false;
	int m= (l+r)/2;
	if(x==array[m]) return true;
	else if(x > array[m]) return binary_search(array,m+1,r,x);
	else return binary_search(array,l,m-1,x);
}

int main(){
	int n,x;cin>>n>>x;
	int arr[n];
	for(auto &x:arr ){
		cin>>x;
	}
//	if(bs(arr,n,x)){
//		cout<<"Found! "<<endl;
//	}
//	else{
//		cout<<"NO found! "<<endl;
//	}
	if(binary_search(arr,0,n-1,x)){
		cout<<"Found! "<<endl;
	}
	else{
		cout<<"No Found! "<<endl;
	}
	
	return 0;
}
