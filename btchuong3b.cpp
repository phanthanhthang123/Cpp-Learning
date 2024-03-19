#include<iostream>

using namespace std;

int main(){
	int n,sum=0;
	int du;
	cout<<"n = ";
	cin>>n;
	for(int i=1;i<10;i++){
		sum = sum + (n%10);
		n=n/10;
		if(n==0) break;
	}	
	
	cout<<sum;
	
	return 0;
}
