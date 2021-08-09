#include<bits/stdc++.h>
using namespace std;
int main(){
    int n[3], req = 0;
    for(int i = 0; i < 3; i++){
        cin >> n[i];
    }
    sort(n, n+3);
    req = n[2] - n[0];
    cout << req << endl;
return 0;
}
