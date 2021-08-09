#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    double r1, r2, h, p, r = 0.0, v = 0.0;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> r1 >> r2 >> h >> p;

        r = (( (r1-r2) * p) / h) + r2;
        v = (pi*p) * (((r*r) + (r*r2) + (r2*r2)) / 3.0);
        cout << "Case " << i << ": " << fixed << setprecision(6)<< v << endl;
    }
return 0;
}
