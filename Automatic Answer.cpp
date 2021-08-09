#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, n, x = 0, S = 0;
    cin >> t;
    while(t--){
        x = 0, S = 0;
        cin >> n;
        x = ((((((n*567)/9)+7492)*235)/47)-498);
        S = x % 100;
        S/= 10;
        cout << abs(S) <<endl;
    }
return 0;
}
