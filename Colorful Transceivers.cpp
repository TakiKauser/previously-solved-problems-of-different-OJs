#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(a-c) <= d) cout << "Yes" << endl;
    else{
        if(a<b){
            if(a+d >= b){
                if(b+d >= c) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
            else cout << "No" << endl;
        }
        if(a>b){
            if(b+d >= a){
                if(a+d >= c) cout << "Yes" << endl;
                else cout << "No" << endl;
            }
            else cout << "No" << endl;
        }
    }
return 0;
}
