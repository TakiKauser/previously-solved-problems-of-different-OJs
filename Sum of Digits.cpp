#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x = 0;
    cin >> t;
    while(t--){
        cin >> n;
        x = 0;
        while(n){
            x += n%10;
            n /= 10;
        }
        cout << x << endl;
    }

return 0;
}
