#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    cin >> s;
    t = s.size();
    for( int i = 0; i < t; i++){
        if(s[i] == '1') s[i] = '9';
        else if(s[i] == '9') s[i] = '1';
    }
    cout << s << endl;
return 0;
}
