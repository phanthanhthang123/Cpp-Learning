#include<iostream>

using namespace std;

void bt1();
void bt2();
void bt3();
void bt4();


int main(){
	rest:
	int n;
	cout<<"Bai thuc hanh : ";
	cin>>n;
	if(n<=0||n>4) goto rest;
	
	switch(n){
		case 1:bt1();
		case 2:bt2();
		case 3:bt3();
		case 4:bt4();
	}
	return 0;
}

void bt1(){
	int n;
	cout<<"n = ";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(array[j]>array[j+1]){
				int tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}	
}
void bt2(){
	int n,k;
	cout<<"n = ";
	cin>>n; 
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"k = ";
	cin>>k;
	int x=-1,y=-1;
	for(int i=0;i<n-1;i++){
		for(int j= i+1;j<n;j++){
			if(array[i]+array[j]==k){
				x=i;
				y=j;
				break;
			}
		}
		if(x!=-1&&y!=-1) break;
	}
	if(x!=-1 && y!=-1){
		cout<<"Ket qua: "<<x<<" "<<y;
	}
	else{
		cout<<"Khong co ket qua";
	}
}
void bt3(){
	int n,m;
	cout<<"So hang n = ";cin>>n;
	cout<<"So cot m = ";cin>>m;
	int mt1[n][m],mt2[n][m],sum[n][m];
	cout<<"NHap ma tran 1: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mt1[i][j];
		}
	}
	cout<<"Nhap ma tran 2: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mt2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum[i][j]=mt1[i][j]+mt2[i][j];
		}
	}
	cout<<"Tong 2 ma tran :"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<sum[i][j]<<" ";//=mt1[i][j]+mt2[i][j];
		}
		cout<<endl;
	}	
	
}
void bt4(){
	int n,m,sum=0;
	cout<<"n = ";cin>>n;
	cout<<"m = ";cin>>m;
	int array[n][m];
	cout<<"Nhap ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(array[i][j]%2==1){
				sum=sum+array[i][j];
			}
		}
	}	
	cout<<"Tong cac so le la: "<<sum;
}
