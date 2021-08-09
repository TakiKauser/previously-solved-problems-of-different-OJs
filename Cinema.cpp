#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, k, siz = 0, cntr = 0, mx = 0;
    string s;
    cin >> n;
    while(n--) {
        cin >> c >> k;
        cin >> s;
        siz = s.size();
        cntr = 0;
        mx = 0;
        for(int i = 0; i < siz; i++){
            if(s[i] == '0') {
                cntr++;
                mx = max(mx, cntr);
            }
            else cntr = 0;
        }
        if(mx >= k+1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
