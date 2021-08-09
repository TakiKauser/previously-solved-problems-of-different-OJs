#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, k, x, cntr = 0;
    cin >> n >> k;
    int a[101] = {0}, req[101] = {0};
    for(int i = 0; i < n; i++){
        cin >> x;
        if(a[x] == 0){
            cntr++;
            a[x]++;
            req[cntr] = i+1;
        }
    }
    if(cntr >= k){
        cout << "YES" << endl;
        for(int i = 1; i <= k; i++){
            cout << req[i] << " ";
        }
    }
    else cout << "NO";
    cout << endl;

    return 0;
}
