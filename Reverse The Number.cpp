#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, x = 0;
    cin >> t;
    for(int i = 1; i <=t; i++){
        cin >> n;
        while(n%10 == 0) n/=10;
        while(n){
            x = n%10;
            n/=10;
            cout << x;
        }
        cout << endl;
    }

return 0;
}
