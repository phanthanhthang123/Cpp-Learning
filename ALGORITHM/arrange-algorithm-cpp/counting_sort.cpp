#include<iostream>

using namespace std;
//thuat toan sap xep dem phan khoi
int cnt[10000001];

int main(){
	int n;cin>>n;
	int a[n];
	int m= INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		m = max(m,a[i]);
	}
	
	for(int i= 0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				cout<<i<<" ";
			}
		}
	}
	
	return 0;
}
