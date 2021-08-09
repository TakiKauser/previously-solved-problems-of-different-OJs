#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n, y, x = 0;
    cin >> n; //101
    y = n;
    while(n != 0){
        x += n%10; //0+1//+0//+1=2
        n /= 10; //10//1//0
    }
    if(y%x == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}
