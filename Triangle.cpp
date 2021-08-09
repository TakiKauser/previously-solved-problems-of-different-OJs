#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    double a[3], x = 0.0, p = 0.0, area = 0.0;
    cin >> t;
    while(t--){
        x = 0;
        area = 0.0;
        for(int i = 0; i < 3; i++){
            scanf("%lf", &a[i]);
            x += a[i];
        }
        sort(a, a+3);
        p = x/2;
        if((a[0] + a[1]) > a[2]){
            area = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
            printf("%.1lf\n", area);
        }
        else cout << "Illegal!" << endl;
    }

return 0;
}
