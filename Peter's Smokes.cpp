#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, k, sum = 0;
    while(cin >> n >> k){
        //if(n < k) sum += n;
        while(n >= k){
            n = n-k+1;
            sum += k;
        }
        sum += n;
        cout << sum << endl;
        sum = 0;
    }
return 0;
}
