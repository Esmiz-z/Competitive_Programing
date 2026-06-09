#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,p=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
         if(v[i]>=v[k-1] && v[i]>0){
            p++;
        }
    }
    cout<<p<<"\n";
}
