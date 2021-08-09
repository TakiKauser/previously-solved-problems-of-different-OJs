#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    if((s.find("0000000") != -1) || (s.find("1111111")) != -1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
