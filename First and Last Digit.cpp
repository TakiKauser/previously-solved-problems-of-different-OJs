#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        x = n%10;
        while(n/10 > 0){
            n /= 10;
        }
        cout << n+x << endl;
    }

return 0;
}
