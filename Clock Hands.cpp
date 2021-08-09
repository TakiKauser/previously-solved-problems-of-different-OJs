#include<bits/stdc++.h>
using namespace std;
int main(){
    int h, m;
    char c;
    double req = 0.0;
    while((cin >> h >> c >> m) && (h || m)){
        req = abs(((30.0 * h)+(m / 2.0))-(6.0 * m));
        if(req > 180) req = 360 - req;
        printf("%0.3lf\n",req);
    }
return 0;
}
