#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    long long int w, m, n;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> w;
        if(w % 2 != 0){
            cout << "Case " << i << ": " << "Impossible" << endl;
        }
        else{
            m = 2;
            n = w / 2;
            while(n % 2 ==0){
                n /= 2;
                m *= 2;
            }
            cout << "Case " << i << ": " << n << " " << m << endl;
        }
    }
return 0;
}
