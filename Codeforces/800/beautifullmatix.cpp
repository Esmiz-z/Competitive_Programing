#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int m[5][5];
    int r = 0, c = 0;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> m[i][j];
            if(m[i][j] == 1){
                r = i;
                c = j;
            }
        }
    }
    
    int moves = 0;
    
    if (r > 2) {
        moves += (r - 2);
    } else {
        moves += (2 - r);
    }
    
    if (c > 2) {
        moves += (c - 2);
    } else {
        moves += (2 - c);
    }
    
    cout << moves << "\n";
}
