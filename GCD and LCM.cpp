#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,t;
    cin >> t;
    while(t--){
        cin >> a >> b;
    long long int gcd=__gcd(a,b);
    long long int lcm=(a*b)/gcd;

    cout << gcd << " " << lcm << endl;
    }
return 0;
}
