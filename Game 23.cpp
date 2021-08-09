#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, cntr = 0;
    cin >> x >> y;

    if(y % x){
        cout << -1 << endl;
        return 0;
    }

    y /= x;

    while(y%3 == 0){
        cntr++;
        y /= 3;
    }
    while(y%2 == 0){
        cntr++;
        y /= 2;
    }
    if(y != 1) cout << -1 << endl;
    else cout << cntr << endl;

    return 0;
}
