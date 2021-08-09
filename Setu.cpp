#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t, n, x, Sum = 0;
    string str;
    cin >> t;
    for( int i = 1; i <= t; i++){
        cin >> x;
        cout << "Case " << i << ":" << endl;
        Sum = 0;
        while( x-- ){
            cin >> str;
            if( str == "donate" ){
                cin >> n;
                Sum += n;
            }
            else if( str == "report" ) cout << Sum <<endl;
        }
    }
return 0;
}
