#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    if(n < 1200 && n >= 0) cout << "ABC" << endl;
    else if(n < 2800 && n > 0) cout << "ARC" << endl;
    else if(n <= 4208 && n > 0) cout << "AGC" << endl;
return 0;
}
