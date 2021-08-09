#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, t1, t2, T, n, m, h1, m1, h2, m2;
    cin >> t;
    while(t--){
        cin >> n >> m;
        T = 0;
        for(int i = 0; i < n; i++){
            scanf("%d:%d %d:%d",&h1, &m1, &h2, &m2);
            t1 = h1*60 + m1;
            t2 = h2*60 + m2;
            T = T + (t2-t1);
        }
        T/=60;
        if(T >= m) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
return 0;
}
