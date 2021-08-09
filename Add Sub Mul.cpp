#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, req[3];
    cin >> a >> b;
    req[0] = a+b;
    req[1] = a-b;
    req[2] = a*b;
    sort(req, req+3);
    cout << req[2] << endl;
return 0;
}
