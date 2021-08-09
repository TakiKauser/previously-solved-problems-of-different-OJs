#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int q, n, a, b, x, y, req;
    cin >> q;
    while(q--){
        cin >> n >> a >> b;
        x = 0;
        y = 0;
        req = 0;
        x = (n/1)* a;
        y = ((n/2)* b) + (n%2)*a;
        req = min(x, y);
        cout << req << endl;
    }
return 0;
}
