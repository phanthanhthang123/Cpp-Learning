#include<iostream>

using namespace std;
int bt1(){
	int n;
	int sum=0;
	cout<<"n= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"S= "<<sum;
	return sum;
}
int bt2(){
	int sum=0;
	int n; 
	cout<<"n = ";
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i*i;
	}
	cout<<"S = "<<sum;
	return sum;
}
int bt3(){
	int n;
	int gt=1;
	cout<<"n= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		gt=gt*i;
	}
	cout<<"n! = "<<gt;
	return gt;
}

void bt4(){
	int n;
	cout<<"n= ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%5==0) cout<<i<<" ";
	} 
}
int main(){
	int n;
	cout<<"Bai thuc hanh : ";
	cin>>n;
	do {
		switch (n){
			case 1:
				bt1();break;
			case 2: 
				bt2();break;
			case 3:
				bt3();break;
			case 4:
				bt4();break;
			default :
				cout<<"Khong hop le"<<endl<<"Vui long nhap lai: ";
				cin>>n;
		}
	}while(n<=0 || n>4);
}
