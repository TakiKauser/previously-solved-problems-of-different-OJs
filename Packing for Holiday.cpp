#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[3];
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[j];
        }
        sort(a, a + 3);
        if(a[2] <= 20) cout<< "Case " << i << ": "<< "good" << endl;
        else cout<< "Case " << i << ": "<< "bad" << endl;
    }
return 0;
}
