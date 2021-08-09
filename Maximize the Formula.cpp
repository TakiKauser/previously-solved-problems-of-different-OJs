#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3], req = 0;
    for(int  i = 0; i < 3; i++) cin >> a[i];
    sort(a, a+3);
    req = (a[2]*10)+a[1]+a[0];
    cout << req << endl;
return 0;
}
