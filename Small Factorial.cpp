#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n>1) return n*fact(n-1);
    else return 1;
}
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << fact(n) <<  endl;
    }

return 0;
}
