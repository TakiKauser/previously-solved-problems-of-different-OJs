#include<bits/stdc++.h>
using namespace std;
int main(){
    double h, u, d, f;
    while((cin >> h >> u >> d >> f) && h != 0.0){
        double F = u *(f/100);
        double U = 0.0;
        int D = 0;
        while(1){
            D++;
            if(u > 0){
                U = U + u;
                u = u - F;
            }
            if(U > h) break;
            U = U - d;
            if(U < 0) break;
        }
        if(U > 0) cout << "success on day " << D << endl;
        else cout << "failure on day " << D << endl;
    }
return 0;
}
