#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, res = 0;
    char op;
    while(cin >> a >> op >> b){
        if(op == '?') return 0;
        else if(op == '+') res = a + b;
        else if(op == '-') res = a - b;
        else if(op == '*') res = a * b;
        else if(op == '/') res = a / b;
        cout << res << endl;
    }
return 0;
}
