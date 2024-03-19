#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<char>st;
    for(char x : s){
        if(x =='('){
            st.push(x);
        }

        if(x == ')'){
            st.pop();
        }
    }
    if(st.empty()){
        cout<<"Bieu thuc : "<<s<<" Hop le";
    }
    else{
        cout<<"Bieu thuc: "<<s<<" Khong hop le";
    }
    return 0;
}