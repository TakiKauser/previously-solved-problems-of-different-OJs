#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x = 0, y = 0;
    cin >> n;
    int  a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    x = a[n-1];
    for(int j = 1; j <= x; j++){
        if(x%j == 0){
            for(int k = 0; k < n; k++){
                if(a[k] == j){
                    a[k] = -1;
                    break;
                }
            }
        }
    }
    sort(a, a+n);
    y = a[n-1];

    cout << x << " " << y << endl;

return 0;
}
