#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    long long int a, b, req = 0;
    while(scanf("%lld%lld", &a, &b) != EOF){
        req = abs(a-b);
        cout << req << endl;
    }
return 0;
}
