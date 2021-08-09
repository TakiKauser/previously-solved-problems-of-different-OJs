#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, n, req = 0;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        req = (a[n-1] - a[0]) * 2;
        cout << req <<endl;
    }
return 0;
}
