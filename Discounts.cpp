#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, q, m, c, i, j, sum = 0, req = 0;
    cin >> n;
    long long int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    for(j = 0; j < n; j++){
           sum += a[j];
        }
    cin >> m;
    while(m--){
        cin >> c;
        req = sum - a[n-c];
        cout << req << endl;
    }
return 0;
}
