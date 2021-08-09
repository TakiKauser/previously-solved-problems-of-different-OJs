#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a, x = 0, req = 0;
    cin >> t;
    for(int i = 1; i <=t; i++){
        cin >> a;
        x = a/6;
        req = sqrt(x);
        cout << req << endl;
    }

return 0;
}
