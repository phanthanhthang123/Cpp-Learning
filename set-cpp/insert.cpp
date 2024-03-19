#include<iostream>
#include<set>

using namespace std;

int main(){
	set<int>s;
	s.insert(100);
	s.insert(200);
	s.insert(100);
	
	set<int> sett;
	for(int i=0;i<=10;i++){
		sett.insert(i);
	}
	if(sett.count(10) !=0){
		cout<<"10 co trong set"<<endl;
	}
	
	for(int x : sett){
		cout<<x<<" ";
	}
    cout<<endl;
    cout<<*sett.begin()<<endl;
    cout<<*sett.rbegin()<<endl;
    // cout<<*(sett.begin()+ 8);
	return 0;
}
