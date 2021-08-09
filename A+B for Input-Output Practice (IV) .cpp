#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(scanf("%d", &t)){
        if(t==0) return 0;
        int a[t];
        int sum = 0;
        for(int i = 0; i < t; i++){
            scanf("%d", &a[i]);
            sum += a[i];
        }
        cout << sum << endl;
    }

return 0;
}
