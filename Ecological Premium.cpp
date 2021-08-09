#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, f;
    cin >> t;
    while(t--){
        cin >> f;
        int a, b, c, req = 0;
        while(f--){
            cin >> a >> b >> c;
            req += a*c;
        }
        cout << req << endl;
    }
return 0;
}
