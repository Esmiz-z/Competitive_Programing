#include<bits/stdc++.h>
using namespace std; 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int x=0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s.substr(0,2)=="++" || s.substr(1,2)=="++"){
            x++;
        }
        else if(s.substr(0,2)=="--" || s.substr(1,2)=="--"){
            x--;
        }
    }
cout<<x;

}                                                                                                                                                           