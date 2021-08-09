#include<bits/stdc++.h>
using namespace std;
int main(){
    double x1, y1, x2, y2;
    double x = 0.0, y = 0.0, dis = 0.0;
    cin >> x1 >> y1 >> x2 >> y2;
    x = abs(x2 - x1);
    y = abs(y2 - y1);
    dis = (x*x) + (y*y);
    dis = sqrt(dis);
    cout << fixed << setprecision(8) << dis << endl;

return 0;
}
