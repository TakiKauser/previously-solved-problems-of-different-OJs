#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a % 5 != 0) cout << (a/5)+1 << endl;
        else cout << a/5 << endl;
    }
    return 0;
}
