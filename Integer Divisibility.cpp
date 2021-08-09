#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    long long int n, x, req, cnt;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> x;
        cnt = 1;
        req = x;
        while(req % n != 0){
            if(req >= n) req = req % n;
            if(req < n) req = (req * 10) + x;
            cnt++;
        }
        cout << "Case " << i << ": " << cnt << endl;
    }
return 0;
}
