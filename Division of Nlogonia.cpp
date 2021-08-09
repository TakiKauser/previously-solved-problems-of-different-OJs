#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, n, m, x, y;
    while(cin >> k){
        if(k == 0) break;
        cin >> n >> m;
        while(k--){
            cin >> x >> y;
            if(x == n || y == m) cout << "divisa" << endl;
            else{
                if(x > n){
                    if(y > m) cout << "NE" << endl;
                    else cout << "SE" << endl;
                }
                else{
                    if(y > m) cout << "NO" << endl;
                    else cout << "SO" << endl;
                }
            }
        }
    }
return 0;
}
