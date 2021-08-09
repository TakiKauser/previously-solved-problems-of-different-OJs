#include<bits/stdc++.h>
using namespace std;
int main(){
    double t, a, x, y = 0.0, z;
    cin >> t;
    x = 0;
    z = 0;
    y = ceil(t/2);
    while(t--){
        cin >> a;
        if(a>0) x++;
        if(a<0) z++;
    }
    if(z >= x && z >= y) cout << -1 << endl;
    else if(x >= z && x >= y) cout << 1 << endl;
    else cout << 0 << endl;
return 0;
}
