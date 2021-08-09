#include<bits/stdc++.h>
using namespace std;

int binary(int n){
    int req = 0, m = 1;
    while(n > 0){
        req += (n % 2) * m;
        m *= 10;
        n /= 2;
    }
    return req;
}

int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t, a, b, c, d, A, B, C, D;
    cin >> t;
    for(int i = 1; i <= t; i++){
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        scanf("%d.%d.%d.%d", &A, &B, &C, &D);
        if(binary(a) == A && binary(b) == B && binary(c) == C && binary(d) == D){
            cout << "Case " << i << ": " << "Yes" <<endl;
        }
        else cout << "Case " << i << ": " << "No" <<endl;
    }
return 0;
}
