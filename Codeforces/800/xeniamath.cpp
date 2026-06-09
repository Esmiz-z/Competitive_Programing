#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0; i<s.size(); i++){
        if(s[i] != '+' && s[i] != '-'){
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
        if(i < v.size() - 1){
            cout<<"+";
        }
    }
    cout<<"\n";
}