#include<bits/stdc++.h>
using namespace std;
int main(){
    int c, t;
    scanf("%d", &c);
    while(c--){
        scanf("%d", &t);
        int a[t];
        int sum = 0;
        for(int i = 0; i < t; i++){
            scanf("%d", &a[i]);
            sum += a[i];
        }
        cout << sum << endl;
        if(c != 0) cout << endl;
    }


return 0;
}
