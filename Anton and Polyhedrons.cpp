#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, x = 0;
    string str;
    cin >> n;
    while( n-- ){
        cin >> str;
        if( str == "Tetrahedron" ) x+=4;
        else if( str == "Cube" ) x+=6;
        else if( str == "Octahedron" ) x+=8;
        else if( str == "Dodecahedron" ) x+=12;
        else if ( str == "Icosahedron" ) x+=20;
    }
    cout << x << endl;

return 0;
}
