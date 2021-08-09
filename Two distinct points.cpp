#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, l1, r1, l2, r2;
    cin >> t;
    while(t--){
        cin >> l1 >> r1 >> l2 >> r2;
        if(l1 == r2) cout << l1+1 << " " << r2 <<endl;
        else cout << l1 << " " << r2 <<endl;
    }
return 0;
}
