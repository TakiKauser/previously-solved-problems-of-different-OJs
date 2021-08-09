#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cntr = 0;
    cin >> n;
    int a[26] = {0};
    string s;
    cin >> s;
    if(n > 26){
        cout << -1 << endl;
        return 0;
    }
    for(int i = 0; i < n; i++) a[s[i] - 'a']++;

    for(int i = 0; i < 26; i++){
        if (a[i] > 1) cntr += a[i] - 1;
    }
    cout << cntr << endl;

return 0;
}
