#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, a, y = 0;
    double z = 100000.0;
    cin >> n >> t >> a;
    double h[n], x[n], req[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];

        x[i] = t - (h[i]* 0.006);
        req[i] = fabs(a - x[i]);
        if(req[i] < z){
            z = req[i];
            y = i+1;
        }
    }
    cout << y << endl;
return 0;
}
