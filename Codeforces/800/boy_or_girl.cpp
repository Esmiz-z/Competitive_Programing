#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    unordered_set<char>se;
    for(int i=0; i<s.size(); i++){
        se.insert(char(s[i]));
    }
    if(se.size() % 2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }
   

}