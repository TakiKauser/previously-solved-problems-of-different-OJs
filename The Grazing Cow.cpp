#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    double d, l, des = 0.0, req = 0.0, pi = 2 * acos(0);
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> d >> l;
        d /= 2;
        l /= 2;
        des = sqrt((l * l) - (d * d));
        req = pi * l * des;
        cout << fixed << setprecision(3) << req << endl;
    }
return 0;
}
