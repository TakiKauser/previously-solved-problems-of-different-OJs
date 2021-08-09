#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int cntr = 0, req = 0;
    string s;
    cin >> s;
    int x = s.size();
    for(int i = 0; i < x; i++){
        if(s[i] == 'a') cntr++;
    }
    req = min((2 * cntr) - 1, x);
    cout << req << endl;

    return 0;
}
