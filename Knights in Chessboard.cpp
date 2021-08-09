#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t, x, y, z = 0, req = 0;
    cin >> t;
    for(int i=1; i<=t; i++){
        cin >> x >> y;

        z = x * y;
        if( x == 1 || y == 1 ) req = z;
        else if( x == 2 || y == 2 ){
            if( x == 2 ) z = y;
            else z = x;

            if( z % 4 ==3) req = z + 1;
            else req = z + z % 4;
        }
        else if( z % 2 == 0) req = z / 2;
        else req = ( z / 2 ) + 1;

    cout << "Case " << i << ": " << req << endl;
    }
return 0;
}
