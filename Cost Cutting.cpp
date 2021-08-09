#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, a[3];
    cin >> t;
    for(int x = 1; x <= t; x++){
        for(int i = 0; i < 3; i++){
            cin >> a[i];
        }
        sort(a, a+3);
        cout << "Case " << x << ": " << a[1] << endl;
    }
return 0;
}
