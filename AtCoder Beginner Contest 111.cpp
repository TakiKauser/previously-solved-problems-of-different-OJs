#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, req = 0;
    cin >> n;
    if(n%111 == 0) cout << n << endl;
    else{
        n /= 111;
        req = (n+1)*111;
        cout << req << endl;
    }
return 0;
}
