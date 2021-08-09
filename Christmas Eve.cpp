#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int h[n], a[n];
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    sort(h, h+n);
    for(int i = 0; i < n-k+1; i++){
        a[i] = h[i+k-1] - h[i];
    }
    sort(a, a+(n-k+1));

    cout << a[0] << endl;
return 0;
}
