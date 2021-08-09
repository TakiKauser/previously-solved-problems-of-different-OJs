#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, b, h, w, p, x = 0;
    while(cin >> n >> b >> h >> w){
        int a[w];
        int y[h];
        for(int j = 0; j < h; j++){
            cin >> p;
            x = 0;
            for(int i = 0; i < w; i++){
                cin >> a[i];
                if(a[i] >= n) x++;
            }
            if(x != 0 ) y[j] = p * n;
            else y[j] = 3000000;
        }
        sort(y, y + h);
        if(y[0] <= b) cout << y[0] << endl;
        else cout << "stay home" << endl;
    }
return 0;
}
