#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, m, req = 0;
    cin >> t;
    while (t--){
        cin >> n >> m;
        n = n/3;
        m = m/3;
        req = n * m;
        cout << req << endl;
    }
return 0;
}
