#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int T;
    double r, cir = 0, sqr = 0, req=0;
    cin >> T;
    for( int i = 1; i <= T; i++ ){
        cin >> r;
        cir = 2 * acos (0.0) * r* r;
        sqr = 4 * r * r;
        req = sqr - cir;
        printf("Case %d: %.2lf\n", i, req );
    }
return 0;
}
