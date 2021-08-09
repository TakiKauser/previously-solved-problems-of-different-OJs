#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++){
            cin >> a[j];
        }
        sort(a,a+n);
        cout << "Case " << i << ": " << a[n-1] << endl;
    }
return 0;
}
