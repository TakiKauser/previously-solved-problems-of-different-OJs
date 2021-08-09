#include<bits/stdc++.h>
using namespace std;
int main(){
        int a, b, y , req = 0;
        cin >> a >> b;
        int x = b;
        y = 0;
        while (x){
                x /= 10;
                y ++;
        }
        while(y--){
                a *= 10;
        }
        int z = a+b;
        req = sqrt(z);
        if(req * req == z) cout << "Yes" << endl;
        else cout << "No" << endl;
return 0;
}
