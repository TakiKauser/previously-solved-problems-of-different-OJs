#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, T;
    cin >> n >> T;
    int c[n], t[n], ci = 1001;
    for(int i = 0; i < n; i++){
        cin >> c[i] >> t[i];
        if(c[i] < ci && t[i] <= T){
            ci = c[i];
        }
    }
    if(ci == 1001) cout << "TLE" << endl;
    else cout << ci << endl;


return 0;
}
