#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, req = 0;
    cin >> t;
    int a[t];
    for( int i = 0; i < t; i++){
        cin >> a[i];
    }
    sort (a, a+t);
    req += a[t-1]/2;
    for( int i = 0; i < t-1; i++){
        req += a[i];
    }
    cout << req << endl;

return 0;
}
