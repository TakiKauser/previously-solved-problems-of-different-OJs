#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, req = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    req = a[n-1] - a[0];
    cout << req << endl;
return 0;
}
