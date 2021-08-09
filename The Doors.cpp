#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0, y = 0, req = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0) x = i;
        if(a[i] == 1) y = i;
    }
    req = (x < y)? x+1: y+1;
    cout << req << endl;

    return 0;
}
