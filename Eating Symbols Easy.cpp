#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string s;
    int x = 0;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == '+') x++;
        if(s[i] == '-') x--;
    }
    cout << x << endl;
return 0;
}
