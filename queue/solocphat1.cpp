#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;

vector<string>v;

void init(){
    queue<string>q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while(true){
        string top = q.front();
        q.pop();
        if(top.length() == 15) break;
        q.push(top + "6");
        q.push(top + "8");
        v.push_back(top + "6");
        v.push_back(top + "8");
    }
}

int main(){
    init();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(string x: v){
            if(x.length() > n) break;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}