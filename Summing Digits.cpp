#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    while(cin >> n){
        if(n == 0) return 0;
        while(n > 9){
            n = (n%10) + (n/10);
        }
        cout << n << endl;
    }

return 0;
}
