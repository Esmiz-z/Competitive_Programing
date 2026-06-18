#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int s=0;
    cin>>n;
    while(n--){
        int sum=0;
         for(int i=0; i<3; i++){
        int sure;
        cin>>sure;
        sum+=sure;
        
 }
    if (sum >= 2)  {
        s++;
    }
    
    }
cout<<s<<"\n";


}