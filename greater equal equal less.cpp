// >==<
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        if(a>b) cout << a << " > " << b << endl;
        else if(a<b) cout << a << " < " << b << endl;
        else cout << a << " == " << b << endl;
    }


return 0;}
