#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, x = 0, req = 0;
    cin >> t;
    for(int i = 1; i <=t; i++){
        cin >> n;
        x = 0;
        while(n--){
            cin >> a;
            if(a > 0) x++;
        }
        cout << x << endl;
    }

return 0;
}
