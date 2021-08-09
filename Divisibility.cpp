#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    if(n>1) return n*fact(n-1);
    else return 1;
}
int main(){
    int t, n, x, y;
    cin >> t;
    while(t--){
        int mul = 1;
        cin >> n >> x >> y;
        int i = 1;
        while(mul < n){
            mul = i*x;
            i++;
            if((mul%y)!=0 && mul< n) cout << mul << " ";
        }
        cout << endl;
    }

return 0;
}
