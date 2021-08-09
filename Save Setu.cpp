#include<bits/stdc++.h>
using namespace std;
int main(){

    int t, n, Sum = 0;
    string str;
    cin >> t;
    while(t--){
        cin >> str;
        if( str == "donate" ){
            cin >> n;
            Sum += n;
        }
        else if( str == "report" ) cout << Sum <<endl;
    }
return 0;
}
