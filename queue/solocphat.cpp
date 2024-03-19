#include<bits/stdc++.h>

using namespace std;
using ll = long long;
vector<string>v;

void init(){
    queue<string>q;
    q.push("6");
    q.push("8");
    while(true){
        string top = q.front();
        q.pop();
        if(top.length()==15) break;
        v.push_back(top + "6");
        v.push_back(top + "8");
        q.push(top + "6");
        q.push(top +"8");
    }

}
int main(){
    init();
    int t;cin>>t;
    while(t--){
        int n;cin >>n;
        vector<string>tmp;
        for(string x : v){
            if(x.length() == n + 1) break;
            tmp.push_back(x);
        }
        // for(auto x : tmp){
        //     cout<<x<<" ";
        // }
        for(int i= tmp.size() - 1; i>=0;i--){
            cout<<tmp[i]<<" ";
        }
        cout<<endl;

    }

    return 0;
}