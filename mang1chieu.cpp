#include<iostream>

using namespace std;

void bt1(){
	int n,m,sum=0;
	cout<<"so hang n = ";
	cin>>n;
	cout<<"so cot m = ";
	cin>>m;
	int array[n][m];
	cout<<"Nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> array[i][j];
		}
	} 
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=array[i][j];
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}	
	 cout<<"Tong cac phan tu trong mang la: "<<sum;
} 

void bt2(){
	int n; 
	cout<<"n = ";
	cin>>n;
	int array[n];
	cout<<"Nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int max = array[0];
	for(int i=1;i<n;i++){
		if(array[i]> max) max = array[i];
	}
	cout<<"Gia tri lon nhat la: "<<max;
}

void bt3(){
	int n,m;
	cout<<"Nhap hang n = ";
	cin>>n;
	cout<<"Nhap cot m = ";
	cin>>m;
	int array[n][m];
	cout<<"Nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	int max[n];
	for(int i=0;i<n;i++){
		max[i]=array[i][0];
		for(int j=0;j<m;j++){
			if(array[i][j]>=max[i]) max[i]=array[i][j];
		}
	}
	cout<<"Cac phan tu lon nhat la: ";
	for(int i=0;i<n;i++){
		cout<<max[i]<<" ";
	}
}
int main(){
//	bt1();
//	bt2();
	bt3();
}
