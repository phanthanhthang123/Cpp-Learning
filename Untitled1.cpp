//C++ 
#include <bits/stdc++.h> 
using namespace std;
int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int max = 0;
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            int sum = 0;
            for(int k = i;k<=j;k++){
                sum+=a[k];
            }
            max = (sum>max) ? sum: max;
        }
    }
    
    cout<<max;
    
    return 0;
}
