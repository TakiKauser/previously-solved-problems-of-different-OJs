#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, req = 0;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        (s[1] == '+') ? req++ : req--;
    }
    cout << req << endl;

    return 0;
}
