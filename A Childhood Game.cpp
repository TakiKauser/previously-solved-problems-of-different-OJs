#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,n;
    string str;
    cin >> t;
    for( int i = 1; i<=t; i++){
        cin >> n;
        cin >> str;
        cout << "Case " << i << ": ";
        n = n % 3;
        if( str == "Alice"  ){
            if( n == 0 || n == 2 ) cout << "Alice" << endl;
            else cout << "Bob"<< endl;
        }
        else if( str == "Bob" ){
            if( n == 1 || n == 2 ) cout << "Bob" << endl;
            else cout << "Alice"<< endl;
        }
    }
return 0;
}
