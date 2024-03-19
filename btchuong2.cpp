#include<iostream>

void bt1(){
	int a,b;
	std::cin>>a>>b;
	std::cout<<a<<" + "<<b<<" = "<<a+b<<std::endl;
	std::cout<<a<<" - "<<b<<" = "<<a-b;
}
void bt2(){
	char a;
	std::cout<<"Chu cai viet thuong la :";
	std::cin>>a;
	std::cout<<"Chu cai viet hoa la : "<< (char)(a-32);
	
}
void bt3(){
	int a,b,tmp;
	std::cin>>a>>b;
	tmp=a;
	a=b;
	b=tmp;
	std::cout<<"Gia tri cua a la "<<a<<std::endl;
	std::cout<<"Gia tri cua b la "<<b;
}

int main(){
	int n;
	std::cout<<"bai thuc hanh can thuc hien: ";
	std::cin>>n;
	switch (n){
		case 1 : bt1();
		case 2: bt2();
		case 3: bt3();
		case 4: bt4();
	} 
} 


