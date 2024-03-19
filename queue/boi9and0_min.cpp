#include<bits/stdc++.h>

using namespace std;
using ll = long long;
vector<ll> v;
ll ans[101];

void init (){
    queue<string>q;
    q.push("9");
    v.push_back(9);
    while(true){
        string top = q.front();
        q.pop();
        if(top.length() == 10) break;
        q.push(top + "0");
        q.push(top + "9");
        v.push_back(stoll(top + "0"));
        v.push_back(stoll(top + "9"));
    }

    for(int i=1;i<=100;i++){
        for(ll x : v){
            if(x %i ==0){
                ans[i] = x; break;
            }
        }
    }
}
int main(){
    init();
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        cout<<n<<" : "<<ans[n]<<endl;
    }

    return 0;
}