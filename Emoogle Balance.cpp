#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, n, x = 0, S = 0, s = 0;
    int i = 1;
    while(cin >> t){
        if(t == 0) break;
        while(t--){
            cin >> n;
            if(n == 0) S++;
            else s++;
        }
        x = s - S;
        cout << "Case "<< i << ": " << x <<endl;
        S = 0;
        s = 0;
        i++;
    }
return 0;
}
