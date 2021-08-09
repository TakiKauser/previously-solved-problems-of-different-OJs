#include<bits/stdc++.h>
using namespace std;
int main(){
        int  n, a, b, s = 0, sum = 0, req = 0;
        cin >> n >> a >> b;
        for(int i = 1; i <= n; i++){
                //s = i.size();
                int x = i;
                sum = 0;
                while(x){
                        sum = sum + (x % 10);
                        x /= 10;
                }
                if(sum >= a && sum <= b) req = req + i;
        }
        cout << req << endl;

return 0;
}
